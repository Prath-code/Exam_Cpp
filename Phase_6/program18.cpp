#include <iostream>
using namespace std;

int main()
{
    int number, birthYear, currentYear, result;

    cout << "Enter any number: ";
    cin >> number;

    cout << "Enter your birth year: ";
    cin >> birthYear;

    cout << "Enter current year: ";
    cin >> currentYear;

    result = number;
    result += 8;
    result *= 3;
    result -= 12;
    result += 5;
    result += birthYear;
    result -= currentYear;

    cout << "Final result: " << result << endl;

    if (result % 7 == 0)
    {
        cout << "The result is divisible by 7." << endl;
    }
    else
    {
        cout << "The result is not divisible by 7." << endl;
    }

    return 0;
}