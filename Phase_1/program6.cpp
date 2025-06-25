#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    cout << 100000 + rand() % 900000;
    return 0;
}
