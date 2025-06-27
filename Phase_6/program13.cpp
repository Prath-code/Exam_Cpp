#include <iostream>
#include <conio.h>
using namespace std;

class Counter
{
    int value;

public:
    Counter() : value(0) {}
    void increment() { ++value; }
    void decrement() { --value; }
    int getValue() const { return value; }
};

int main()
{
    Counter counter;
    cout << "Counter App (Press UP to increment, DOWN to decrement, ESC to exit)\n";
    cout << "Current Value: " << counter.getValue() << endl;

    while (true)
    {
        int ch = _getch();
        if (ch == 27)
            break;
        if (ch == 0 || ch == 224)
        {
            int arrow = _getch();
            if (arrow == 72)
            {
                counter.increment();
            }
            else if (arrow == 80)
            {
                counter.decrement();
            }
            cout << "\rCurrent Value: " << counter.getValue() << "   ";
        }
    }
    cout << "\nExiting...\n";
    return 0;
}