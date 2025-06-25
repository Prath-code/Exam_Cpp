#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string msg;
    cout << "Enter the message: ";
    cin >> msg;
    string vowels, consonants, digits, specials;
    for (char c : msg)
    {
        if (isalpha(c))
        {
            char cl = tolower(c);
            if (cl == 'a' || cl == 'e' || cl == 'i' || cl == 'o' || cl == 'u')
                vowels += c;
            else
                consonants += c;
        }
        else if (isdigit(c))
        {
            digits += c;
        }
        else
        {
            specials += c;
        }
    }
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "Specials: " << specials << endl;
    return 0;
}
