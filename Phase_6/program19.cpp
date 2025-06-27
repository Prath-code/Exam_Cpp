#include <iostream>
#include <string>
using namespace std;

class DiningTable
{
public:
    void display()
    {
        cout << "  Dining Table is placed in the kitchen." << endl;
    }
};

class Kitchen
{
    DiningTable diningTable;

public:
    void display()
    {
        cout << "Kitchen is built." << endl;
        diningTable.display();
    }
};

class Bathroom
{
public:
    void display()
    {
        cout << "  Bathroom is attached to the bedroom." << endl;
    }
};

class Bedroom
{
    Bathroom bathroom;

public:
    void display()
    {
        cout << "Bedroom is built." << endl;
        bathroom.display();
    }
};

class Garage
{
public:
    void display()
    {
        cout << "  Garage is available in the backyard." << endl;
    }
};

class Backyard
{
    Garage garage;

public:
    void display()
    {
        cout << "Backyard is built." << endl;
        garage.display();
    }
};

class House
{
    Kitchen kitchen;
    Bedroom bedroom;
    Backyard backyard;

public:
    void build()
    {
        cout << "Building the house..." << endl;
        kitchen.display();
        bedroom.display();
        backyard.display();
    }
};

int main()
{
    House myHouse;
    myHouse.build();
    return 0;
}