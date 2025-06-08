#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int cnt = N * N, n;
    int arr[10][10];
    n = (cnt % 2 == 1 ? 11 : 10);

    for (int i = 0; i < N; i++)
    {
        if (n % 2 == 0)
        {
            cnt++;
            for (int j = N; j >= 0; j--)
            {
                arr[j][i] = cnt--;
            }
        }
        else
        {
            for (int j = 0; j < N; j++)
            {
                arr[j][i] = cnt--;
            }
        }
        n--;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    return 0;
}