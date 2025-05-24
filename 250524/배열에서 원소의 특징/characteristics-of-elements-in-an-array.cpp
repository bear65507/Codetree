#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int N;

    for (int i = 0; i < 10; i++)
    {
        cin >> N;
        arr[i] = N;
        if (N % 3 == 0)
        {
            cout << arr[i - 1] << endl;
            break;
        }
    }
    return 0;
}