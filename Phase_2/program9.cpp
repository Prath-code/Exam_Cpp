#include <iostream>
using namespace std;

int main() {
    float weight, height;
    cout << "Enter weight in kg: ";
    cin >> weight;
    cout << "Enter height in meters: ";
    cin >> height;

    float bmi = weight / (height * height);
    cout << "BMI: " << bmi << endl;
    return 0;
}
