#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    bool IsMultiplyC = false;
    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            IsMultiplyC = true;
            break;
        }
    }

    if (IsMultiplyC)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}