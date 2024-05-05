#include <PixelEngineCore\Window.h>

int main()
{
    constexpr int WIDTH = 800;
    constexpr int HEIGHT = 600;
    const std::string TITLE = "My SFML Window";

    // ������� ������ ���� � ������� ������������ ������ Window
    Window window(WIDTH, HEIGHT, TITLE);

    // ��������� ������� ���� ����������
    window.run();

    return 0;
}