#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double tree_height = 13.0;
    double rope_length = 26.0;

    double distance = sqrt(rope_length * rope_length - tree_height * tree_height);

    cout << "The distance between the tree and the end of the rope on the ground is: "
         << distance << " meters." << std::endl;

    return 0;
}