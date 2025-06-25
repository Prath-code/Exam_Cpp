#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    cout << "Enter a word: ";
    cin >> word;
    int count = 0, sum = 0;
    string found = "";
    for (char c : word)
    {
        char cl = tolower(c);
        if (cl == 'a' || cl == 'e' || cl == 'i' || cl == 'o' || cl == 'u')
        {
            count++;
            sum += int(c);
            found += c;
        }
    }
    double avg = count == 0 ? 0 : (double)sum / count;
    cout << "Vowels: " << found << endl;
    cout << "Count: " << count << endl;
    cout << "Average ASCII: " << avg << endl;
    if (avg == 0)
        cout << "Level: GORGEOUS" << endl;
    else if (avg >= 10 && avg <= 15)
        cout << "Level: SMOOTHER" << endl;
    else if (avg > 15 && avg <= 30)
        cout << "Level: SOBER" << endl;
    else if (avg > 30)
        cout << "Level: HARDER" << endl;
    return 0;
}
