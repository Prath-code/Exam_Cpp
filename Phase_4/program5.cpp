#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x;
    vector<int> odd, even;
    cout << "Enter how many numbers: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter number: ";
        cin >> x;
        if (x % 2 == 0) even.push_back(x);
        else odd.push_back(x);
    }
    cout << "Even numbers: ";
    for (int i : even) cout << i << " ";
    cout << "\nOdd numbers: ";
    for (int i : odd) cout << i << " ";
    cout << endl;
    return 0;
}
