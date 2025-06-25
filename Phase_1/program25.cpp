#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cout << "Enter valueb of 'a': ";
    cin >> a;
    cout << "Enter valueb of 'b': ";
    cin >> b;
    cout << "Enter valueb of 'c': ";
    cin >> c;
    cout << "Enter valueb of 'd': ";
    cin >> d;
    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    if (d > max)
        max = d;
    cout << max;
    return 0;
}
