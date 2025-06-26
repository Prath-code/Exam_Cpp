#include <iostream>
using namespace std;

void transferCoins() {
    string bowl1 = "coin", bowl2 = "coin";
    bowl1 = "", bowl2 = "coincoin";
    cout << "Coins transferred: Bowl1 is empty, Bowl2 has both coins." << endl;
}

int main() {
    transferCoins();
    return 0;
}
