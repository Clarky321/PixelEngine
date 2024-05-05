#include <PixelEngineCore\Window.h>

// Конструктор класса Window. Создает объект окна SFML с указанными параметрами (ширина, высота, заголовок).
Window::Window(int width, int height, const std::string& title)
	: m_window(sf::VideoMode(width, height), title)
{
}

// Деструктор класса Window.
Window::~Window()
{
}

// Метод run() запускает главный цикл приложения, в котором происходит обработка событий, обновление и отрисовка.
void Window::run()
{
	while (m_window.isOpen())
	{
		processEvents(); // Обработка событий.
		update();		 // Обновление состояния игры.
		render();		 // Отрисовка игровых объектов на экране.
	}
}

void Window::processEvents()
{
	sf::Event event;

	while (m_window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			m_window.close(); // Если событие - закрытие окна, закрываем окно.
		}
	}
}

void Window::update()
{

}

void Window::render()
{
	m_window.clear();	// Очищаем экран.

	m_window.display(); // Отображаем нарисованное.
}