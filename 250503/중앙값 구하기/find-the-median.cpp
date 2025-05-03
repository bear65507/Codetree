#include <iostream>
using namespace std;

void BobbleSort(int arr[])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2 - i; j++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> n;
        arr[i] = n;
    }

    BobbleSort(arr);
    int median = arr[1];

    cout << median << endl;

    return 0;
}