#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;
    if (str.length() > 3 && str.length() < 9)
    {
        string rev = string(str.rbegin(), str.rend());
        cout << "Reversed string: " << rev << endl;
    }
    else
    {
        int sum = 0;
        for (char c : str)
        {
            sum += int(c);
        }
        cout << "Sum of ASCII values: " << sum << endl;
    }
    return 0;
}
