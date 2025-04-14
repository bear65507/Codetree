#include <iostream>
using namespace std;

int n;
int arr[100000];
int merged_arr[100000];

void Merge(int arr[], int low, int mid, int high)
{
    int i = low, j = mid + 1;

    int k = low;
    while (i <= mid and j <= high)
    {
        if (arr[i] <= arr[j])
        {
            merged_arr[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            merged_arr[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        merged_arr[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        merged_arr[k] = arr[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
        arr[i] = merged_arr[i];
}

void Merge_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        Merge_sort(arr, low, mid);
        Merge_sort(arr, mid + 1, high);
        Merge(arr, low, mid, high);
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Merge_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
