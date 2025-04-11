#include <iostream>
using namespace std;

int n;
int arr[100];

void SelectSort(int arr[])
{

    for (int i = 0; i < n - 1; i++)
    {
        int minimum = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minimum]) 
            {
                minimum = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minimum];
        arr[minimum] = temp;
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    SelectSort(arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
