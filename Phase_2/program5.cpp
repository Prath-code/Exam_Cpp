#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter number of students: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        int math, phy, chem;
        cout << "Enter Maths marks: ";
        cin >> math;
        cout << "Enter Physics marks: ";
        cin >> phy;
        cout << "Enter Chemistry marks: ";
        cin >> chem;

        if (math > 80 && phy > 75 && chem > 72)
            cout << "Grade A\n";
        else if (math >= 60 && math <= 80 && phy >= 55 && phy <= 75 && chem >= 50 && chem <= 72)
            cout << "Grade B\n";
        else if (math >= 40 && math < 60 && phy >= 35 && phy < 55 && chem >= 35 && chem < 50)
            cout << "Grade C\n";
        else
            cout << "Grade D (Fail)\n";
    }
    return 0;
}
