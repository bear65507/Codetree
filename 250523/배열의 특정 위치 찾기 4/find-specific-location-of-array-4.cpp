#include <iostream>
using namespace std;

#define SIZE 10

int main() {
    int N, cnt = 0, sum = 0;

    for (int i = 0; i < SIZE; i++)
    {
        cin >> N;
        if (N == 0)
            break;
        if (N % 2 == 0)
        {
            cnt++;
            sum += N;
        }
    }
    cout << cnt << " " << sum << endl;

    return 0;
}