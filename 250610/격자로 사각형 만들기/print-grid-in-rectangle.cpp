#include <iostream>
using namespace std;

int main() {
    int N;
    int arr[10][10];

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < N; j++)
            {
                    arr[i][j] = 1;
            }
        }
        arr[i][0] = 1;
    }

    for (int i = 1; i < N; i++)
    {
        for (int j = 1; j < N; j++)
        {
            arr[i][j] = arr[i - 1][j] + arr[i][j - 1] + arr[i - 1][j - 1];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}