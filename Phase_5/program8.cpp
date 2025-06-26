#include <iostream>
using namespace std;

void toHHMMSS(int sec) {
    int h = sec / 3600;
    sec %= 3600;
    int m = sec / 60;
    int s = sec % 60;
    cout << "Time: " << h << ":" << m << ":" << s << endl;
}

int toSeconds(int h, int m, int s) {
    return h * 3600 + m * 60 + s;
}

int main() {
    int choice;
    cout << "1. Seconds to HH:MM:SS\n2. Time to Seconds\nEnter choice: ";
    cin >> choice;
    if (choice == 1) {
        int sec;
        cout << "Enter seconds: ";
        cin >> sec;
        toHHMMSS(sec);
    } else {
        int h, m, s;
        cout << "Enter hours: ";
        cin >> h;
        cout << "Enter minutes: ";
        cin >> m;
        cout << "Enter seconds: ";
        cin >> s;
        cout << "Total Seconds: " << toSeconds(h, m, s) << endl;
    }
    return 0;
}
