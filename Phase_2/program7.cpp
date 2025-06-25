#include <iostream>
using namespace std;

int main() {
    int choice;
    float radius;
    const float pi = 3.14159;

    do {
        cout << "1. Area\n2. Perimeter\n3. Diameter\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice != 4) {
            cout << "Enter radius: ";
            cin >> radius;
        }

        switch(choice) {
            case 1: cout << "Area: " << pi * radius * radius << endl; break;
            case 2: cout << "Perimeter: " << 2 * pi * radius << endl; break;
            case 3: cout << "Diameter: " << 2 * radius << endl; break;
        }
    } while(choice != 4);

    return 0;
}
