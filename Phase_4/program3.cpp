#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;
    string shift_keys = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    bool found = false;
    for (char c : word) {
        if (shift_keys.find(tolower(c)) != string::npos) {
            found = true;
            break;
        }
    }
    cout << (found ? "Contains SHIFT zone key" : "Does not contain SHIFT zone key") << endl;
    return 0;
}
