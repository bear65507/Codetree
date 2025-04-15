#include <iostream>
#include <iomanip>
using namespace std;

#define MI 160934;
#define FT 30.48;

int main() {
    double mitoCM = 1.3 * MI;
    double fttoCM = 9.2 * FT;

    cout << fixed << setprecision(1);
    cout << 9.2 << "ft = " << fttoCM << "cm" << endl;
    cout << 1.3 << "mi = " << mitoCM << "cm" << endl;
    return 0;
}