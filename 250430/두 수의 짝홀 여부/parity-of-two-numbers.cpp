#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << (a % 2 == 0 ? "even\n" : "odd\n");
    cout << (b % 2 == 0 ? "even\n" : "odd\n");
    return 0;
}