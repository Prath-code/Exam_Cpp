#include <iostream>
using namespace std;

int cube(int num);

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The cube of " << num << " is " << cube(num) << endl;
    return 0;
}
int cube(int num)
{
    return num * num * num;
}
