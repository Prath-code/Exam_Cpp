#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string word;
    cout << "Enter the word: ";
    cin >> word;
    reverse(word.begin(), word.end());
    cout << "Mirror image: " << word << endl;
    return 0;
}
