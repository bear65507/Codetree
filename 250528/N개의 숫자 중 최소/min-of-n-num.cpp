#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[100];
    int min = INT_MAX, cnt = 0, N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        min = (min < arr[i] ? min : arr[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if (arr[i] == min)
            cnt++;
    }

    cout << min << " " << cnt << endl;

    return 0;
}