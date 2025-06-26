#include <iostream>
using namespace std;

int main() {
    int a[5][5];
    cout << "Enter 25 elements of matrix:\n";
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++) {
            cout << "Enter number: ";
            cin >> a[i][j];
        }
    cout << "Upper triangle:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j >= i) cout << a[i][j] << " ";
            else cout << "  ";
        }
        cout << endl;
    }
    cout << "Lower triangle:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j <= i) cout << a[i][j] << " ";
            else cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
