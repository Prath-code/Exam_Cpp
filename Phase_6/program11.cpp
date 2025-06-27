#include <iostream>
#include <map>
#include <string>

using namespace std;

map<string, string> festivalMap = {
    {"01-14", "Makar Sankranti / Pongal"},
    {"01-26", "Republic Day"},
    {"03-08", "Maha Shivaratri"},
    {"03-25", "Holi"},
    {"04-14", "Baisakhi / Tamil New Year / Vishu"},
    {"08-15", "Independence Day"},
    {"08-19", "Raksha Bandhan"},
    {"09-07", "Janmashtami"},
    {"10-02", "Gandhi Jayanti"},
    {"10-12", "Dussehra"},
    {"10-31", "Diwali"},
    {"11-01", "Bhai Dooj"},
    {"12-25", "Christmas"}};

int main()
{
    int day, month;
    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter day (1-31): ";
    cin >> day;

    char dateStr[6];
    snprintf(dateStr, sizeof(dateStr), "%02d-%02d", month, day);

    auto it = festivalMap.find(dateStr);
    if (it != festivalMap.end())
    {
        cout << "Festival on " << dateStr << ": " << it->second << endl;
    }
    else
    {
        cout << "No major Indian festival on this date." << endl;
    }

    return 0;
}