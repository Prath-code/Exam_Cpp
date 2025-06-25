#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, count = 0;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum += i;
            count++;
        }
    }

    double avg = (count == 0) ? 0 : (double)sum / count;
    cout << "Average of even numbers: " << avg << endl;
    return 0;
}
