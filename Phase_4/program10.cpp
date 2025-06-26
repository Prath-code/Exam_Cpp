#include <iostream>
using namespace std;

int main() {
    int a[5][5], sum = 0;
    cout << "Enter 25 elements of matrix:\n";
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++) {
            cout << "Enter number: ";
            cin >> a[i][j];
        }
    for (int i = 0; i < 5; i++) {
        sum += a[i][i];
        sum += a[i][4 - i];
    }
    if (5 % 2 == 1) sum -= a[2][2];
    cout << "Sum of diagonals: " << sum << endl;
    return 0;
}
