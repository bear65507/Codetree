#include <iostream>
using namespace std;

int main() {
    int arr[4][4], sum = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
            if (i >= j)
                sum += arr[i][j];
        }
    }
    cout << sum << endl;

    return 0;
}