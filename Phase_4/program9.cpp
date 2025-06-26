#include <iostream>
using namespace std;

int main() {
    int a[3][3], maxVal, minVal;
    cout << "Enter weights in 3x3 matrix:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            cout << "Enter weight: ";
            cin >> a[i][j];
        }
    maxVal = minVal = a[0][0];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            if (a[i][j] > maxVal) maxVal = a[i][j];
            if (a[i][j] < minVal) minVal = a[i][j];
        }
    cout << "Maximum weight: " << maxVal << endl;
    cout << "Minimum weight: " << minVal << endl;
    return 0;
}
