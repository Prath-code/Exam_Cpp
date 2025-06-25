#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float principal, rate, time;
    cout << "Enter loan amount: ";
    cin >> principal;
    cout << "Enter annual interest rate (%): ";
    cin >> rate;
    cout << "Enter loan term in years: ";
    cin >> time;

    float monthlyRate = rate / (12 * 100);
    int months = time * 12;
    float emi = (principal * monthlyRate * pow(1 + monthlyRate, months)) / (pow(1 + monthlyRate, months) - 1);

    cout << "Monthly EMI: " << emi << endl;
    return 0;
}
