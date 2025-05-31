#include <iostream>
using namespace std;

int main() {
    int arr[4][4];
    int sum[4] = {0, };

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
            sum[i] += arr[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
        cout << sum[i] << endl;

    return 0;
}