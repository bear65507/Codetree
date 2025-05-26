#include <iostream>
using namespace std;

int main() {
    int N, M;
    int arr[100];
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> M;
        if (M % 2 == 0)
            arr[i] = M;
        else
            arr[i] = -1;
    }

    for (int i = 0; i < N; i++)
    {
        if (arr[i] != -1)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}