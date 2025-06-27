#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int initial_pieces = 123500;
    double initial_revenue = 78000.0;
    int months = 3;
    int multiplier = 10;

    int new_pieces = initial_pieces * multiplier * months;
    double revenue_per_piece = initial_revenue / initial_pieces;
    double new_revenue = new_pieces * revenue_per_piece;

    double total_initial_revenue = initial_revenue * months;
    double increment_percentage = ((new_revenue - total_initial_revenue) / total_initial_revenue) * 100;

    cout << fixed << setprecision(2);
    cout << "Total cashews produced in " << months << " months: " << new_pieces << endl;
    cout << "Total revenue in " << months << " months: Rs. " << new_revenue << endl;
    cout << "Increment percentage: " << increment_percentage << "%" << endl;

    return 0;
}