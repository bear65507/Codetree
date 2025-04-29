#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    a = (a % 2 == 0 ? a / 2 : a);
    a = (a % 2 == 1 ? (a + 1) / 2 : a);

    cout << a << endl;
    return 0;
}