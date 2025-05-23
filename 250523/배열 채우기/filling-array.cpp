#include <iostream>
using namespace std;

#define SIZE 10

int main() {
    int N, cnt = 0;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        cin >> N;
        if (N == 0)
            break;
        arr[i] = N;
        cnt++;
    }

    for (int j = cnt - 1; j >= 0; j--)
    {
        cout << arr[j] << " ";
    }

    return 0;
}