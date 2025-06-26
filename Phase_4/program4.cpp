#include <iostream>
using namespace std;

int main() {
    int internal[5] = {23, 19, 22, 28, 23};
    int final[5] = {65, 58, 49, 52, 64};
    int total[5], sum = 0;
    for (int i = 0; i < 5; i++) {
        total[i] = internal[i] + final[i];
        cout << "Total marks in subject " << i + 1 << ": " << total[i] << "/100" << endl;
        sum += total[i];
    }
    cout << "Average marks: " << sum / 5.0 << endl;
    return 0;
}
