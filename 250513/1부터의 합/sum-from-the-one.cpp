#include <iostream>
using namespace std;

int main() {
    int N, res, sum = 0;
    cin >> N;

    for (int i = 1; i <= 100; i++)
    {
        sum += i;
        if (sum >= N)
        {
            res = i;
            break;
        }
    }
    cout << res << endl;

    return 0;
}