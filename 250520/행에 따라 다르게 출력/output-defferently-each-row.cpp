#include <iostream>
using namespace std;

int main() {
    int N, cnt = 0;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < N; j++)
            {
                cout << ++cnt << " ";
            }
        }
        else
        {
            for (int k = 0; k < N; k++)
            {
                cout << cnt + 2 << " ";
                cnt += 2;
            }
        }
        cout << endl;
    }
    return 0;
}