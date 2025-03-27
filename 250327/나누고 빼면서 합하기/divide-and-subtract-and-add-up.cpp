#include <iostream>

using namespace std;

int n, m;
int A[100];

int DivideNAdd(int arr[], int m)
{
    int sum = 0;
    while(m >= 1)
    {
        if (m % 2 == 1)
        {
            sum += arr[m - 1];
            m--;
        }
        else
            sum += arr[m - 1];
            m /= 2;
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