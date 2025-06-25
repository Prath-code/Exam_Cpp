#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter starting number (n1): ";
    cin >> n1;
    cout << "Enter ending number (n2): ";
    cin >> n2;

    for (int i = n1; i <= n2; i++)
    {
        cout << "Table of " << i << ":\n";
        for (int j = 1; j <= 10; j++)
        {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << endl;
    }
    return 0;
}
