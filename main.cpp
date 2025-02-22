#include <iostream>
#include <string>
#include <windows.h>
#include "counter.h"

int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string response;
    int initial_value = 1;

    // Запрос начального значения счётчика
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> response;

    Counter counter;

    if (response == "да") 
    {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> initial_value;
        counter = Counter(initial_value); // Используем конструктор с начальным значением
    }
    else 
    {
        counter = Counter(); // Используем конструктор по умолчанию
    }

    // Взаимодействие с пользователем
    char command;
    while (true) 
    {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;

        if (command == '+') 
        {
            counter.increment();
        }
        else if (command == '-') 
        {
            counter.decrement();
        }
        else if (command == '=') 
        {
            std::cout << counter.getValue() << std::endl;
        }
        else if (command == 'x')
        {
            std::cout << "До свидания!" << std::endl;
            break;
        }
        else 
        {
            std::cout << "Неверная команда! Попробуйте снова." << std::endl;
        }
    }

    return 0;
}