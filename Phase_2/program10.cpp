#include <iostream>
using namespace std;

int main() {
    float amount, gstRate;
    cout << "Enter original amount: ";
    cin >> amount;
    cout << "Enter GST rate (%): ";
    cin >> gstRate;

    float gst = amount * gstRate / 100;
    float total = amount + gst;

    cout << "GST: " << gst << endl;
    cout << "Total amount: " << total << endl;
    return 0;
}
