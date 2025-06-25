#include <iostream>
using namespace std;

int main() {
    int choice;
    float temp;

    do {
        cout << "1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter temperature in Celsius: ";
            cin >> temp;
            cout << "Fahrenheit: " << (temp * 9 / 5) + 32 << endl;
        } else if (choice == 2) {
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temp;
            cout << "Celsius: " << (temp - 32) * 5 / 9 << endl;
        }
    } while (choice != 3);

    return 0;
}
