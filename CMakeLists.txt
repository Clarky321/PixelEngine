# Установка минимальной версии CMake
cmake_minimum_required(VERSION 3.12)

# Определение названия проекта
set(PROJECT_NAME PixelEngine)
project(${PROJECT_NAME})

# Добавления поддиректории для модуля PixelEngineCore (ядро движка)
add_subdirectory(PixelEngineCore)

# Добавления поддиректории для модуля PixelEngineEditor (запускаем файл приложения)
add_subdirectory(PixelEngineEditor)

# Установка PixelEngineEditor в качестве стартового проекта для Visual Studio
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT PixelEngineEditor)