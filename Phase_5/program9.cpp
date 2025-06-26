#include <iostream>
using namespace std;

int timeToSeconds(int h, int m, int s) {
    return h * 3600 + m * 60 + s;
}

int main() {
    int h1, m1, s1, h2, m2, s2;
    cout << "Enter time1 (HH MM SS): ";
    cin >> h1 >> m1 >> s1;
    cout << "Enter time2 (HH MM SS): ";
    cin >> h2 >> m2 >> s2;
    int diff = abs(timeToSeconds(h1, m1, s1) - timeToSeconds(h2, m2, s2));
    cout << "Difference in seconds: " << diff << endl;
    return 0;
}
