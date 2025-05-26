#include <iostream>
using namespace std;

int main() {
    int N, arr[100], i = 2;
    cin >> N;

    arr[0] = 1;
    arr[1] = N;
    cout << arr[0] << " " << arr[1] << " ";
    while (true)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
        cout << arr[i] << " ";
        if (arr[i] > 100)
            break;
        i++;
    }
    return 0;
}