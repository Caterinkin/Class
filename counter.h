#ifndef COUNTER_H
#define COUNTER_H

#include <string>

class Counter 
{
public:
    Counter(); // Êîíñòðóêòîð ïî óìîë÷àíèþ
    Counter(int initial_value); // Êîíñòðóêòîð ñ íà÷àëüíûì çíà÷åíèåì

    void increment(); // Óâåëè÷åíèå ñ÷¸ò÷èêà íà 1
    void decrement(); // Óìåíüøåíèå ñ÷¸ò÷èêà íà 1
    int getValue() const; // Ïîëó÷åíèå òåêóùåãî çíà÷åíèÿ ñ÷¸ò÷èêà

private:
    int value; // Òåêóùåå çíà÷åíèå ñ÷¸ò÷èêà
};

#endif // COUNTER_H
