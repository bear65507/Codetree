#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int arr[2][4];
    double mean = 0, total = 0;

    cout << fixed << setprecision(1);

    for (int i = 0; i < 2; i++)
    {
        mean = 0;
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
            mean += arr[i][j];
        }
        total += mean;
        cout << mean / 4 << " ";
    }

    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        mean = 0;
        mean += arr[0][i] + arr[1][i];
        cout << mean / 2 << " ";
    }
    cout << endl << total / 8 << endl;
    return 0;
}