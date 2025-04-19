#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 2, c = 3;
    int sum = a + b + c;
    a = b = c = sum;

    cout << a << " " << b << " " << c << endl;
    return 0;
}