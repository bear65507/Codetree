#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    cout.setf(ios::fixed);
    cout.precision(3);

    cout << a << endl << b << endl << c << endl;
    return 0;
}