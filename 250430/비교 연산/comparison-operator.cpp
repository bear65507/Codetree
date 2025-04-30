#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << (a >= b) << endl << (a > b) << endl << (b >= a) << endl;
    cout << (b > a) << endl << (a == b) << endl << (a != b) << endl;
    return 0;
}