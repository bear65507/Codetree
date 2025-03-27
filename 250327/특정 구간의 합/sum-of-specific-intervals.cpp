#include <iostream>
using namespace std;

int n, m;
int arr[100];
int A[100] = { 0 };
int B[100] = { 0 };

int AddElements(int arr[], int a1, int a2)
{
    int sum = 0;
    for (int i = a1; i <= a2; i++)
    {
        sum += arr[i - 1];
    }
    return sum;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++) {
        int a1, a2;
        cin >> a1 >> a2;
        A[i] = a1;
        B[i] = a2;
    }

    for (int i = 0; i < m; i++)
    {
        cout << AddElements(arr, A[i], B[i]) << endl;
    }

    return 0;
}