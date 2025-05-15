#include <iostream>
using namespace std;

int main() {
    int N, x = 0;
    cin >> N;

    int i = N;
    while (i != 1)
    {
        i /= 2;
        x++;
    }

    cout << x << endl;

    return 0;
}