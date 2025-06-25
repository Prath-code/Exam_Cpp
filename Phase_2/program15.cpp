#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double diagonal = 52;
    double aspectWidth = 16;
    double aspectHeight = 9;

    double ratio = sqrt(aspectWidth * aspectWidth + aspectHeight * aspectHeight);
    double width = diagonal * (aspectWidth / ratio);
    double height = diagonal * (aspectHeight / ratio);

    double wallWidth = width + 20;
    double wallHeight = height + 20;

    cout << "Minimum wall width: " << wallWidth << " inches" << endl;
    cout << "Minimum wall height: " << wallHeight << " inches" << endl;

    return 0;
}
