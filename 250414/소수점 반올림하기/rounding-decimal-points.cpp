#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a = 25.352;

    cout << fixed << setprecision(1);
    cout << a;

    return 0;
}