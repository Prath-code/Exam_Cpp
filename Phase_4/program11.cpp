#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    int x;
    for (int i = 0; i < 5; i++) {
        cout << "Enter ball number: ";
        cin >> x;
        s.push(x);
    }
    cout << "Balls in reverse order:\n";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}
