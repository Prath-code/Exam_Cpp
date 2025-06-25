#include <iostream>
using namespace std;

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    int binary[32], i = 0;
    while (decimal > 0) {
        binary[i++] = decimal % 2;
        decimal /= 2;
    }

    cout << "Binary: ";
    for (int j = i - 1; j >= 0; j--)
        cout << binary[j];
    cout << endl;

    return 0;
}
