#include <iostream>
using namespace std;

int main() {
    int N, M;
    int r, c;
    cin >> N >> M;
    int arr[9][9] = {0, };

    for (int i = 0; i < M; i++)
    {
        cin >> r >> c;
        arr[r - 1][c - 1] = 1;
    }
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << arr[i][j] << " "; 
        }
        cout << endl;
    }

    return 0;
}