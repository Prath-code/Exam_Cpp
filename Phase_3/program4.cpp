#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of entries: ";
    cin >> n;
    map<string, string> firstNames, lastNames;
    for (int i = 0; i < n; ++i)
    {
        string pid, fname;
        cout << "Enter passport ID for first name: ";
        cin >> pid;
        cout << "Enter first name: ";
        cin >> fname;
        firstNames[pid] = fname;
    }
    for (int i = 0; i < n; ++i)
    {
        string pid, lname;
        cout << "Enter passport ID for last name: ";
        cin >> pid;
        cout << "Enter last name: ";
        cin >> lname;
        lastNames[pid] = lname;
    }
    cout << "Merged Names:\n";
    for (auto &p : firstNames)
    {
        string pid = p.first;
        cout << pid << ": " << firstNames[pid] + " " + lastNames[pid] << endl;
    }
    return 0;
}
