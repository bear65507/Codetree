#include <iostream>
using namespace std;

int n, m;
int A[100];

int DivideNAdd(int arr[], int m)
{
    int sum = 0;
    sum += arr[m - 1];
    while (m > 1)
    {
        if (m % 2 == 1)
        {
            m--;
            sum += arr[m - 1];
        }
        else
        {
            m /= 2;
            sum += arr[m - 1];
        }
    }
    return sum;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << DivideNAdd(A, m) << endl;

    return 0;
}