#pragma once
#ifndef COUNTER_H
#define COUNTER_H

#include <string>

class Counter 
{
public:
    Counter(); // ����������� �� ���������
    Counter(int initial_value); // ����������� � ��������� ���������

    void increment(); // ���������� �������� �� 1
    void decrement(); // ���������� �������� �� 1
    int getValue() const; // ��������� �������� �������� ��������

private:
    int value; // ������� �������� ��������
};

#endif // COUNTER_H