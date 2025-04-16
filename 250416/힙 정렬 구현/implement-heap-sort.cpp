#include <iostream>
using namespace std;

int n;
int arr[100001];

void Swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void Heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = i * 2;
    int right = i * 2 + 1;

    if (left <= n and arr[left] > arr[largest])
        largest = left;
    if (right <= n and arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        Swap(arr[i], arr[largest]);
        Heapify(arr, n, largest);
    }
}

void HeapSort(int arr[], int n)
{
    for (int i = n / 2; i >= 1; i--)
        Heapify(arr, n, i);

    for (int i = n; i > 1; i--)
    {
        Swap(arr[1], arr[i]);
        Heapify(arr, i - 1, 1);
    }
}

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    HeapSort(arr, n);

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
