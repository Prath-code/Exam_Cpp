#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter any character: ";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Uppercase";
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "Lowercase";
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "Digit";
    }
    else
    {
        cout << "Special";
    }
    return 0;
}
