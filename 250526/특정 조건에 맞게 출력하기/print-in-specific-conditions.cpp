#include <iostream>
using namespace std;

int main() {
    int N, cnt = 0;
    int arr[100];

    for (int i = 0; i < 100; i++)
    {
        cin >> N;
        if (N == 0)
            break;
        arr[i] = N;
        cnt++;
    }
    
    for (int i = 0; i < cnt; i++)
    {
        if (arr[i] % 2 == 0)
            cout << arr[i] / 2 << " ";
        else
            cout << arr[i] + 3 << " ";
    }

    return 0;
}