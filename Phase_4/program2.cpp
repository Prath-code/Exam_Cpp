#include <iostream>
using namespace std;

int main() {
    int kills[10], max = 0, index = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Enter killing score of soldier " << i + 1 << ": ";
        cin >> kills[i];
        if (kills[i] > max) {
            max = kills[i];
            index = i;
        }
    }
    cout << "Soldier " << index + 1 << " has the highest killing score: " << max << endl;
    return 0;
}
