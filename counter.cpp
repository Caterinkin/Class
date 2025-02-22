#include "counter.h"

// Конструктор по умолчанию (начальное значение = 1)
Counter::Counter() : value(1) 
{
}

// Конструктор с начальным значением
Counter::Counter(int initial_value) : value(initial_value) {}

// Увеличение счётчика на 1
void Counter::increment() 
{
    value++;
}

// Уменьшение счётчика на 1
void Counter::decrement() 
{
    value--;
}

// Получение текущего значения счётчика
int Counter::getValue() const
{
    return value;
}
