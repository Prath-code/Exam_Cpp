#include <iostream>
using namespace std;

void largestArmy(int us, int china, int india) {
    if (us > china && us > india) cout << "US has the largest army." << endl;
    else if (china > us && china > india) cout << "China has the largest army." << endl;
    else cout << "India has the largest army." << endl;
}

int main() {
    int us, china, india;
    cout << "Enter US army strength: ";
    cin >> us;
    cout << "Enter China army strength: ";
    cin >> china;
    cout << "Enter India army strength: ";
    cin >> india;
    largestArmy(us, china, india);
    return 0;
}
