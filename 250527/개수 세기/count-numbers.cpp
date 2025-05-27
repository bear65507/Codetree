#include <iostream>
using namespace std;

int main() {
    int N, M, number, cnt = 0;
    int arr[100] = {0};
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> number;
        if (number == M)
        {
            arr[number]++;
        }
    }

    cout << arr[M] << endl;
    return 0;
}