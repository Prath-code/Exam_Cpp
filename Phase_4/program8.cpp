#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;
    int a[r][c];
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            cout << "Enter element: ";
            cin >> a[i][j];
        }
    cout << "Transposed matrix:\n";
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
