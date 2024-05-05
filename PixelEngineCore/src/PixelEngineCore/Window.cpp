#include <PixelEngineCore\Window.h>

// ����������� ������ Window. ������� ������ ���� SFML � ���������� ����������� (������, ������, ���������).
Window::Window(int width, int height, const std::string& title)
	: m_window(sf::VideoMode(width, height), title)
{
}

// ���������� ������ Window.
Window::~Window()
{
}

// ����� run() ��������� ������� ���� ����������, � ������� ���������� ��������� �������, ���������� � ���������.
void Window::run()
{
	while (m_window.isOpen())
	{
		processEvents(); // ��������� �������.
		update();		 // ���������� ��������� ����.
		render();		 // ��������� ������� �������� �� ������.
	}
}

void Window::processEvents()
{
	sf::Event event;

	while (m_window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			m_window.close(); // ���� ������� - �������� ����, ��������� ����.
		}
	}
}

void Window::update()
{

}

void Window::render()
{
	m_window.clear();	// ������� �����.

	m_window.display(); // ���������� ������������.
}