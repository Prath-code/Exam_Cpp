#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int hour24, minute;
    cout << "Enter hour (0-23): ";
    cin >> hour24;
    cout << "Enter minutes (0-59): ";
    cin >> minute;

    if (hour24 < 0 || hour24 > 23 || minute < 0 || minute > 59)
    {
        cout << "Invalid time input." << endl;
        return 1;
    }

    int hour12 = hour24 % 12;
    if (hour12 == 0)
        hour12 = 12;
    string period = (hour24 < 12) ? "AM" : "PM";

    cout << "12-hour format: " << hour12 << ":" << setw(2) << setfill('0') << minute << " " << period << endl;
    return 0;
}