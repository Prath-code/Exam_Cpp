#include <iostream>
#include <cstring>
using namespace std;

class StringComparer
{
public:
    int compare(const string &s1, const string &s2)
    {
        return (s1 == s2) ? 1 : 0;
    }
    int compare(const char *s1, const char *s2)
    {
        return (strcmp(s1, s2) == 0) ? 1 : 0;
    }
};

int main()
{
    StringComparer sc;
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);

    cout << sc.compare(str1, str2) << endl;
    cout << sc.compare(str1.c_str(), str2.c_str()) << endl;

    return 0;
}