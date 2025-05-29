#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int max = 0, min = 1001;

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if (arr[i] > max and arr[i] < 500)
            max = arr[i];
        if (arr[i] < min and arr[i] > 500)
            min = arr[i];
    }

    cout << max << " " << min << endl;
    return 0;
}