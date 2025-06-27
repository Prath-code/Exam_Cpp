#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Player
{
protected:
    string name;
    int age;

public:
    void getData()
    {
        cin >> name >> age;
    }
    void displayData() const
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class CricketPlayer : public Player
{
protected:
    string team;

public:
    void getData()
    {
        Player::getData();
        cin >> team;
    }
    void displayData() const
    {
        Player::displayData();
        cout << "Team: " << team << endl;
    }
};

class Batsman : public CricketPlayer
{
private:
    int runs, balls;

public:
    void getData()
    {
        CricketPlayer::getData();
        cin >> runs >> balls;
    }
    void displayData() const
    {
        CricketPlayer::displayData();
        cout << "Role: Batsman\nRuns: " << runs
             << ", Balls: " << balls
             << ", Strike Rate: " << fixed << setprecision(2)
             << ((balls != 0) ? (runs * 100.0 / balls) : 0.0) << endl;
    }
};

class Bowler : public CricketPlayer
{
private:
    int wickets;
    float overs;

public:
    void getData()
    {
        CricketPlayer::getData();
        cin >> wickets >> overs;
    }
    void displayData() const
    {
        CricketPlayer::displayData();
        cout << "Role: Bowler\nWickets: " << wickets
             << ", Overs: " << overs
             << ", Economy Rate: " << fixed << setprecision(2)
             << ((overs != 0) ? (wickets * 1.0 / overs) : 0.0) << endl;
    }
};

int main()
{
    vector<Batsman> batsmen(3);
    vector<Bowler> bowlers(2);

    for (int i = 0; i < 3; i++)
    {
        batsmen[i].getData();
    }

    for (int i = 0; i < 2; i++)
    {
        bowlers[i].getData();
    }

    for (int i = 0; i < 3; i++)
    {
        batsmen[i].displayData();
    }

    for (int i = 0; i < 2; i++)
    {
        bowlers[i].displayData();
    }

    return 0;
}
