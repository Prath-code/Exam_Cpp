#include <iostream>
#include <string>
using namespace std;

int main()
{
    string dare1, dare2;
    cout << "Enter dare by player 1: ";
    cin >> dare1;
    cout << "Enter dare by player 2: ";
    cin >> dare2;
    string temp = dare1;
    dare1 = dare2;
    dare2 = temp;
    cout << "Player 1 must do: " << dare1 << endl;
    cout << "Player 2 must do: " << dare2 << endl;
    return 0;
}
