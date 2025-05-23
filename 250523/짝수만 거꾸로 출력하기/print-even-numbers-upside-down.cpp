#include <iostream>
using namespace std;

#define SIZE 100

int main() {
    int N, M, cnt = 0;
    int arr[SIZE];
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> M;
        if (M % 2 == 0)
        {
            arr[cnt] = M;
            cnt++;
        }
    }

    for (int i = cnt - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}