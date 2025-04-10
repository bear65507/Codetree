#include <iostream>

using namespace std;

int n;
int arr[100];

void Swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void BobbleSort(int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
                Swap(arr[j], arr[j + 1]);
        }
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    BobbleSort(arr);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
