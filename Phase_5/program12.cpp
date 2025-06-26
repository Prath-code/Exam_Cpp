#include <iostream>
using namespace std;

float velocity(int distance, int time) {
    return (float)distance / time;
}

int main() {
    int distance = 1933;
    int time1 = 40, time2 = 46;
    cout << "Velocity of Bus B1: " << velocity(distance, time1) << " km/h" << endl;
    cout << "Velocity of Bus B2: " << velocity(distance, time2) << " km/h" << endl;
    return 0;
}
