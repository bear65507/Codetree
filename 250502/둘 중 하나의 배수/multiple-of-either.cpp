#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    if (a % 3 == 0 or a % 5 == 0)
        cout << "1" << endl;
    else
        cout << "0" << endl;
    return 0;
}