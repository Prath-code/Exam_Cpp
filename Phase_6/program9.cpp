#include <iostream>
#include <iomanip>
#include <map>
#include <string>

using namespace std;

map<string, double> gstRates = {
    {"Essential Goods", 0.05},
    {"Standard Goods", 0.12},
    {"Luxury Goods", 0.18},
    {"Sin Goods", 0.28}};

void showCategories()
{
    cout << "Available Categories:\n";
    int idx = 1;
    for (const auto &pair : gstRates)
    {
        cout << idx++ << ". " << pair.first << " (" << pair.second * 100 << "% GST)\n";
    }
}

string getCategory(int choice)
{
    int idx = 1;
    for (const auto &pair : gstRates)
    {
        if (idx == choice)
            return pair.first;
        idx++;
    }
    return "";
}

int main()
{
    int n;
    cout << "GST Calculator\n";
    cout << "Enter number of items: ";
    cin >> n;

    double totalTax = 0, totalAmount = 0;

    for (int i = 0; i < n; ++i)
    {
        cout << "\nItem " << i + 1 << ":\n";
        showCategories();
        cout << "Select category (1-4): ";
        int catChoice;
        cin >> catChoice;
        string category = getCategory(catChoice);

        if (category == "")
        {
            cout << "Invalid category. Skipping item.\n";
            continue;
        }

        cout << "Enter price of item: ";
        double price;
        cin >> price;

        double gst = price * gstRates[category];
        cout << "GST for this item: Rs. " << fixed << setprecision(2) << gst << endl;

        totalTax += gst;
        totalAmount += price + gst;
    }

    cout << "\nTotal GST on all items: Rs. " << fixed << setprecision(2) << totalTax << endl;
    cout << "Total amount (including GST): Rs. " << totalAmount << endl;

    return 0;
}