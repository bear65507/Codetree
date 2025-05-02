#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    if (a < 10 or a > 20)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}