#include <iostream>
using namespace std;
/*
    4. Two classmates wants to exchange their
        seating with each other. But the
        problem
        is that there are only two chairs in
        the
        small classroom which already aquires
        by
        them. Write a C++ Program which
        provides a
        solution for this particular problem.
*/
void swap(int &a, int &b);

int main()
{
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;
}
void swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}
