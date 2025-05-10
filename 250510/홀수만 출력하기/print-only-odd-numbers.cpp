#include <iostream>
using namespace std;

int main() {
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a % 3 == 0 and a % 2 == 1)
            cout << a << endl;
    }
    return 0;
}