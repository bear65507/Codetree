#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    a = (a % 2 == 1 ? a + 3 : a);
    a = (a % 3 == 0 ? a / 3 : a);

    cout << a << endl;
    return 0;
}