#include <iostream>
using namespace std;
int main()
{
    int inches;
    cout << "Enter inches: ";
    cin >> inches;
    cout << inches / 12 << " " << inches % 12;
    return 0;
}
