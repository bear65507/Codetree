#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    cin >> a;
    cin >> b >> c >> d >> e;

    cout << (a > b ? "1" : "0") << endl;
    cout << (a > c ? "1" : "0") << endl;
    cout << (a > d ? "1" : "0") << endl;
    cout << (a > e ? "1" : "0") << endl;
    return 0;
}