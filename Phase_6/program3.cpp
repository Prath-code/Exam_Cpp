#include <iostream>
#include <string>
using namespace std;

struct Company
{
    string name;
    int bid;
};

int main()
{
    Company companies[3] = {
        {"Phantom Corp", 0},
        {"Specter Ltd", 0},
        {"GhostWorks Inc", 0}};

    cout << "Welcome to the Arizona Haunted House Auction!\n";
    cout << "Three companies will bid for the haunted house.\n";
    cout << "Let the auction begin!\n\n";

    for (int round = 1; round <= 3; ++round)
    {
        cout << "Round " << round << ":\n";
        for (int i = 0; i < 3; ++i)
        {
            cout << companies[i].name << ", enter your bid: $";
            int bid;
            cin >> bid;
            if (bid > companies[i].bid)
            {
                companies[i].bid = bid;
            }
        }
        cout << endl;
    }

    int maxBid = companies[0].bid;
    int winnerIndex = 0;
    for (int i = 1; i < 3; ++i)
    {
        if (companies[i].bid > maxBid)
        {
            maxBid = companies[i].bid;
            winnerIndex = i;
        }
    }

    cout << "Auction Over!\n";
    cout << "The haunted house is sold to " << companies[winnerIndex].name
         << " for $" << companies[winnerIndex].bid << "!\n";

    return 0;
}