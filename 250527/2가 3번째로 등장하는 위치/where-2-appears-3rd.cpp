#include <iostream>
using namespace std;

int main() {
    int N, twoCount = 0, idx = -1;
    int arr[100];

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        if (arr[i] == 2)
            twoCount++;
        if (twoCount == 3)
        {
            idx = i;
            break;
        }
    }

    cout << idx + 1 << endl;
    return 0;
}