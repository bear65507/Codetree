#include <iostream>
using namespace std;

int main() {
    int arr[100][100];
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            arr[i][j] = M * i + (j + 1);
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
           cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}