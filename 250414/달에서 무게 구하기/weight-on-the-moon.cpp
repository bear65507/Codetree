#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int chu = 13;
    double g = 0.165;

    cout.setf(ios::fixed);
    cout << setprecision(6);

    cout << chu << " * " << g << " = " << chu * g;
    return 0;
}