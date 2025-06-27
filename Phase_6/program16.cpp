#include <iostream>
using namespace std;

class Box
{
    int length, width, height, volume;

public:
    // Parameterized constructor
    Box(int l, int w, int h)
    {
        length = l;
        width = w;
        height = h;
        volume = length * width * height;
    }

    int getVolume()
    {
        return volume;
    }

    bool isEven()
    {
        return (volume % 2 == 0);
    }
};

int main()
{
    int l, w, h;
    cout << "Enter length, width, and height of the box: ";
    cin >> l >> w >> h;

    Box b(l, w, h);

    int vol = b.getVolume();
    cout << "Volume of the box: " << vol << endl;

    if (b.isEven())
        cout << "The volume is an even number." << endl;
    else
        cout << "The volume is an odd number." << endl;

    return 0;
}