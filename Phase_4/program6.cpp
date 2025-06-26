#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n, year;
    unordered_map<int, int> freq;
    vector<int> duplicates;
    cout << "Enter number of years: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter year: ";
        cin >> year;
        freq[year]++;
        if (freq[year] == 2) {
            duplicates.push_back(year);
        }
    }
    cout << "Duplicate years: ";
    for (int y : duplicates) cout << y << " ";
    cout << endl;
    return 0;
}
