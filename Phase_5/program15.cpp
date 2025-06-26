#include <iostream>
using namespace std;

int main() {
    int canvasW = 794, canvasH = 1123;
    int phraseW = 350, phraseH = 90, gap = 8;
    int cols = (canvasW + gap) / (phraseW + gap);
    int rows = (canvasH + gap) / (phraseH + gap);
    cout << "Total phrases: " << cols * rows << endl;
    return 0;
}
