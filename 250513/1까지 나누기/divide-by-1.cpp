#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int i = N, j = 1;
    while (i > 1)
    {
        i /= j;
        j++;
    }
    cout << j - 1 << endl;

    return 0;
}