#include <iostream>
#include <cmath>

int main()
{
    double ladder_length = 15.0;
    double distance_from_wall = 7.0;

    double wall_height = std::sqrt(ladder_length * ladder_length - distance_from_wall * distance_from_wall);

    std::cout << "The height of the wall is: " << wall_height << " meters." << std::endl;

    return 0;
}