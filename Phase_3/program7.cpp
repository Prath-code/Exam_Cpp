#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string toTitleCase(string str)
{
    if (!str.empty())
        str[0] = toupper(str[0]);
    for (size_t i = 1; i < str.size(); ++i)
        str[i] = tolower(str[i]);
    return str;
}

string toggleCase(string str)
{
    for (char &c : str)
    {
        if (islower(c))
            c = toupper(c);
        else if (isupper(c))
            c = tolower(c);
    }
    return str;
}

int main()
{
    string str;
    int choice;
    cout << "Enter a string: ";
    cin >> str;
    cout << "1. Lowercase\n2. Uppercase\n3. Title case\n4. Toggle case\nEnter choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        break;
    case 2:
        transform(str.begin(), str.end(), str.begin(), ::toupper);
        break;
    case 3:
        str = toTitleCase(str);
        break;
    case 4:
        str = toggleCase(str);
        break;
    default:
        cout << "Invalid choice\n";
        return 0;
    }
    cout << "Converted string: " << str << endl;
    return 0;
}
