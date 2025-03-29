#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[100];

void FindMedian(int arr[])
{
    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % 2 == 1)
        {
            sort(arr, arr + (i + 1));
            int medianIdx = i / 2; // 1 2 3 i = 2 j 
            cout << arr[medianIdx] << " ";
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    FindMedian(arr);

    return 0;
}