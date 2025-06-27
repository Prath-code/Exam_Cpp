#include <iostream>
using namespace std;

int main() {
    double baseCost, aidPercent, finalCost, aidAmount;

    cout << "Enter the base installation cost of solar panels (in INR): ";
    cin >> baseCost;

    cout << "Enter government aid percentage (e.g., 30 for 30%): ";
    cin >> aidPercent;

    aidAmount = (aidPercent / 100.0) * baseCost;

    finalCost = baseCost - aidAmount;

    cout << "\nBase Installation Cost: Rs. " << baseCost << endl;
    cout << "Government Aid (" << aidPercent << "%): Rs. " << aidAmount << endl;
    cout << "----------------------------------------" << endl;
    cout << "Total Cost after Government Aid: Rs. " << finalCost << endl;

    return 0;
}