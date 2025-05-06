#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> b >> a;

    for (int i = b; i >= a; i--)
    {
        if (i % 2 == 1)
            cout << i << " ";
    }
    return 0;
}