#include <iostream>
#include <algorithm>
using namespace std;

int N;
int A[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A, A + N, greater<int>());
    cout << A[0] << " " << A[1] << endl;
    return 0;
}
