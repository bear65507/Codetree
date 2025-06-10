#include <iostream>
using namespace std;

int main() {
    int N;
    int arr[15][15] = {0, };
    cin >> N;

    for (int i = 0; i < N; i++)
    {   
        arr[i][i] = 1;
        arr[i][0] = 1;
    }

    for (int i = 2; i < N; i++)
    {
        for (int j = 1; j < N; j++)
        {
            if (j <= i)
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }

    for (int i = 0; i < N; i++)
    {   
        for (int j = 0; j < N; j++)
        {
            if (arr[i][j] != 0)
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}