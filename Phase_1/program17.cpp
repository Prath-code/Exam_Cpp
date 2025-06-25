#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;
    bool prime = n > 1;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            prime = false;
        }
    }
    cout << (prime ? "Prime" : "Not Prime");
    return 0;
}
