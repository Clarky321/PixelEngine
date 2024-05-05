#include <PixelEngineCore\Window.h>

int main()
{
    constexpr int WIDTH = 800;
    constexpr int HEIGHT = 600;
    const std::string TITLE = "My SFML Window";

    // Создаем объект окна с помощью конструктора класса Window
    Window window(WIDTH, HEIGHT, TITLE);

    // Запускаем главный цикл приложения
    window.run();

    return 0;
}