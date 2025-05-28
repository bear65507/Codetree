#include <iostream>
using namespace std;

int N;
int a[1000];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int max_idx = N;

    while (true)
    {
        int max_v = -1;
        for (int i = max_idx; i >= 0; i--)
        {
            max_v = (max_v > a[i] ? max_v : a[i]);
        }

        for (int i = 0; i <= max_idx; i++)
        {
            if (a[i] == max_v)
            {
                cout << i + 1 << " ";
                max_idx = i - 1;
                break;
            }
        }
        if (max_idx < 0)
        {
            break;
        }
    }

    return 0;
}
