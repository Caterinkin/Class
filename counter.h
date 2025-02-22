#pragma once
#ifndef COUNTER_H
#define COUNTER_H

#include <string>

class Counter 
{
public:
    Counter(); // Конструктор по умолчанию
    Counter(int initial_value); // Конструктор с начальным значением

    void increment(); // Увеличение счётчика на 1
    void decrement(); // Уменьшение счётчика на 1
    int getValue() const; // Получение текущего значения счётчика

private:
    int value; // Текущее значение счётчика
};

#endif // COUNTER_H