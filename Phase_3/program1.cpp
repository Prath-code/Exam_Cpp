#include <iostream>
#include <map>
using namespace std;

int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;
    map<char, int> freq;
    for (char c : str)
    {
        freq[c]++;
    }
    cout << "Character Frequencies:\n";
    for (auto it : freq)
    {
        cout << it.first << ": " << it.second << endl;
    }
    return 0;
}
