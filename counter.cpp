#include "counter.h"

// ����������� �� ��������� (��������� �������� = 1)
Counter::Counter() : value(1) 
{
}

// ����������� � ��������� ���������
Counter::Counter(int initial_value) : value(initial_value) {}

// ���������� �������� �� 1
void Counter::increment() 
{
    value++;
}

// ���������� �������� �� 1
void Counter::decrement() 
{
    value--;
}

// ��������� �������� �������� ��������
int Counter::getValue() const
{
    return value;
}
