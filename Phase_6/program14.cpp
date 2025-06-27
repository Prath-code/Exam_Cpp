#include <iostream>
using namespace std;

class ElectricityBill
{
    double units;

public:
    ElectricityBill(double u) : units(u) {}

    double calculateBill() const
    {
        double bill = 0;
        if (units <= 100)
        {
            bill = units * 1.5;
        }
        else if (units <= 300)
        {
            bill = 100 * 1.5 + (units - 100) * 2.5;
        }
        else
        {
            bill = 100 * 1.5 + 200 * 2.5 + (units - 300) * 4.0;
        }
        bill += 50;
        return bill;
    }
};

int main()
{
    double units;
    cout << "Enter total units consumed in a month: ";
    cin >> units;

    ElectricityBill bill(units);
    cout << "Total Electricity Bill: Rs. " << bill.calculateBill() << endl;
    return 0;
}