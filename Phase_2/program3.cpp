#include <iostream>
using namespace std;

int main() {
    int x;
    for (x = -1000; x <= 1000; x++) {
        if (2 * (x - 3) == 4 * x - 1) {
            cout << "Value of x: " << x << endl;
            break;
        }
    }
    return 0;
}
