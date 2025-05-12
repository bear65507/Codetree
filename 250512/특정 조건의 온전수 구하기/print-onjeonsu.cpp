#include <iostream>
using namespace std;

int main() {
    int N, digit;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        digit = i % 10;

        if (i % 2 == 0 or (i % 3 == 0 and i % 9 != 0) or digit == 5)
            continue;

        cout << i << " ";
    }

    return 0;
}