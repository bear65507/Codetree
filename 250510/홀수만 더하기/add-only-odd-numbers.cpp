#include <iostream>
using namespace std;

int main() {
    int n, a, sum = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a % 2 == 1 and a % 3 == 0)
            sum += a;
    }

    cout << sum << endl;

    return 0;
}