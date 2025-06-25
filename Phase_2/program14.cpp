#include <iostream>
using namespace std;

int main() {
    float income, tax = 0;
    cout << "Enter your income: ";
    cin >> income;

    if (income <= 250000)
        tax = 0;
    else if (income <= 500000)
        tax = (income - 250000) * 0.05;
    else if (income <= 1000000)
        tax = 12500 + (income - 500000) * 0.2;
    else
        tax = 112500 + (income - 1000000) * 0.3;

    cout << "Total tax to be paid: " << tax << endl;
    return 0;
}
