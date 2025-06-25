#include <iostream>
using namespace std;

void quotient_remainder(int dividend, int divisor, int &quotient, int &remainder);

int main() {
    int dividend, divisor, quotient, remainder;
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;

    quotient_remainder(dividend, divisor, quotient, remainder);

    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;

    return 0;
}

void quotient_remainder(int dividend, int divisor, int &quotient, int &remainder) {
    quotient = dividend / divisor;
    remainder = dividend % divisor;
}
