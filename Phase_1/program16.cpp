#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;
    cout << (n % 2 == 0 ? "Even" : "Odd");
    return 0;
}
