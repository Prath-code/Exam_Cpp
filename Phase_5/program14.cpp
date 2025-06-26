#include <iostream>
using namespace std;

bool isCurtainFit(float cw, float ch, float ww = 10, float wh = 4) {
    return cw >= ww + 2 && ch >= wh + 2;
}

int main() {
    float cw, ch;
    cout << "Enter curtain width: ";
    cin >> cw;
    cout << "Enter curtain height: ";
    cin >> ch;
    if (isCurtainFit(cw, ch))
        cout << "Curtain fits" << endl;
    else
        cout << "Curtain does not fit" << endl;
    return 0;
}
