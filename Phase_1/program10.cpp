#include <iostream>
using namespace std;
int main()
{
    int days;
    cout << "Enter number of days: ";
    cin >> days;
    cout << days / 365 << " " << (days % 365) / 7 << " " << (days % 365) % 7;
    return 0;
}
