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

    // ������ ���������� �������� ��������
    std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
    std::cin >> response;

    Counter counter;

    if (response == "��") 
    {
        std::cout << "������� ��������� �������� ��������: ";
        std::cin >> initial_value;
        counter = Counter(initial_value); // ���������� ����������� � ��������� ���������
    }
    else 
    {
        counter = Counter(); // ���������� ����������� �� ���������
    }

    // �������������� � �������������
    char command;
    while (true) 
    {
        std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
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
            std::cout << "�� ��������!" << std::endl;
            break;
        }
        else 
        {
            std::cout << "�������� �������! ���������� �����." << std::endl;
        }
    }

    return 0;
}