#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string username;
    cout << "Enter Instagram username: ";
    cin >> username;
    string pure = "";
    for (char c : username)
    {
        if (isalpha(c))
            pure += c;
    }
    cout << "Pure username: " << pure << endl;
    return 0;
}
