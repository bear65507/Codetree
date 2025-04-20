#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double ft;
    cin >> ft;

    cout << fixed << setprecision(1);
    cout << ft * 30.48 << endl;

    return 0;
}