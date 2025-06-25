#include <iostream>
#include <string>
using namespace std;

int main()
{
    string msg;
    int shift;
    int choice;
    cout << "Enter the message: ";
    cin >> msg;
    cout << "Enter shift value: ";
    cin >> shift;
    cout << "1. Encode\n2. Decode\nEnter choice: ";
    cin >> choice;
    string result = msg;
    if (choice == 1)
    {
        for (char &c : result)
        {
            c += shift;
        }
    }
    else if (choice == 2)
    {
        for (char &c : result)
        {
            c -= shift;
        }
    }
    else
    {
        cout << "Invalid choice\n";
        return 0;
    }
    cout << "Result: " << result << endl;
    return 0;
}
