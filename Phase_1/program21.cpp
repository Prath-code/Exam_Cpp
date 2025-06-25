#include <iostream>
using namespace std;
int main()
{
    int n, c = 0;
    cout << "Enter the value for 'n: ";
    cin >> n;
    while (n)
    {
        n /= 10;
        c++;
    }
    cout << "Number of digits: " << c;
    return 0;
}
