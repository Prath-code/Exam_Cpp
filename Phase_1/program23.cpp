#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, sum = 0, temp, digits = 0;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;
    while (temp)
    {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp)
    {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    cout << (sum == n ? "Armstrong" : "Not Armstrong");
    return 0;
}
