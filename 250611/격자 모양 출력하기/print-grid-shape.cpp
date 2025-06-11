#include <iostream>
using namespace std;

int main() {
    int N, M, C, R;
    int arr[10][10] = {0, };
    cin >> N >> M;
    
    for (int i = 0; i < M; i++)
    {
        cin >> C >> R;
        arr[C - 1][R - 1] = C * R;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}