#include <iostream>
#include <algorithm>
using namespace std;

int n;
int A[100];
int B[100];

bool IsSameArray(int A[], int B[])
{
    sort(A, A + n);
    sort(B, B + n);

    for (int i = 0; i < n; i++)
    {
        if (A[i] != B[i])
            return false;
    }
    return true;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    if (IsSameArray(A, B))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}