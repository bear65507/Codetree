#include <iostream>
using namespace std;

int main() {
    double a, b;
    cin >> a;
    cin >> b;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << a + b << endl;
    return 0;
}