#include <iostream>
using namespace std;

/*
    1. Meena face an isuue to perform a mathematical operation to find a cube of any number.
        Write a C++ Program which helps Meena to solve her issue.
*/

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
