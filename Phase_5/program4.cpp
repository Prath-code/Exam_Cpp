#include <iostream>
using namespace std;

void classifyArray(int arr[], int n) {
    int cubeArr[n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cubeArr[i] = arr[i] * arr[i] * arr[i];
        sum += cubeArr[i];
    }
    float avg = (float)sum / n;
    cout << "Average of cube array: " << avg << endl;
    if (avg >= 22 && avg <= 35) cout << "TIGHTER" << endl;
    else if (avg > 35 && avg <= 50) cout << "BALANCED" << endl;
    else if (avg > 50) cout << "TOXIC" << endl;
    else cout << "LOOSER" << endl;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter element: ";
        cin >> arr[i];
    }
    classifyArray(arr, n);
    return 0;
}
