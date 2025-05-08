#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    cin >> n;

    while (i <= n)
    {
        if (i % 3 == 0)
            cout << i << " ";
        i++;
    }

    return 0;
}