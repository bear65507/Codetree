#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char c;
    double a, b;

    cin >> c;
    cin >> a;
    cin >> b;

    cout << c << endl;
    cout << fixed << setprecision(2);
    cout << a << endl << b << endl;
    
    return 0;
}