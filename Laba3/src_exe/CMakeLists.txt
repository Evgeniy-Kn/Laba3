# CMakeList.txt: проект CMake для Laba3; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_executable(Task1 "main.c")
target_link_libraries(Task1 Task1lib)



add_executable(Task2 "main.c")
target_link_libraries(Task2 Task2lib)



add_executable(Task3 "main.c")
target_link_libraries(Task3 Task3lib)
