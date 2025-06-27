#include <iostream>
#include <vector>
using namespace std;

class AsciiAlphabets
{
    vector<int> asciiValues;

public:
    AsciiAlphabets()
    {
        int count = 0;
        for (char ch = 'A'; ch <= 'Z'; ++ch)
        {
            if ((count + 1) % 3 != 0)
                asciiValues.push_back((int)ch);
            count++;
        }
        for (char ch = 'a'; ch <= 'z'; ++ch)
        {
            if ((count + 1) % 3 != 0)
                asciiValues.push_back((int)ch);
            count++;
        }
    }

    vector<int> getAsciiValues()
    {
        return asciiValues;
    }
};

int main()
{
    AsciiAlphabets obj;
    vector<int> arr = obj.getAsciiValues();

    cout << "ASCII values (skipping every 3rd alphabet):\n";
    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << "\n";

    int sum = 0;
    for (int val : arr)
        sum += val;

    cout << "Sum: " << sum << "\n";
    if (sum % 2 == 0)
        cout << "Sum is Even\n";
    else
        cout << "Sum is Odd\n";

    return 0;
}