#include <iostream>
using namespace std;

int a, b, c;

int Minimum(int a, int b, int c)
{
    int min = (a < b) ? a : b;
    if (min == a)
        min = (a < c) ? a : c;
    else if (min == b)
        min = (b < c) ? b : c;

    return min;
}

int main() {
    cin >> a >> b >> c;

    cout << Minimum(a, b, c) << endl;

    return 0;
}