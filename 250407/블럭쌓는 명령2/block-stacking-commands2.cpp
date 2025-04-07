#include <iostream>
using namespace std;

int N, K;
int A[100], B[100];
int block[100] = {0};

int main() {
    cin >> N >> K;

    for (int i = 0; i < K; i++) {
        cin >> A[i] >> B[i];

        int start = A[i] - 1;
        int dest = B[i];
        for (int i = start; i < dest; i++)
        {
            block[i] += 1;
        }
    }
    
    int max = 0;
    for (int i = 0; i < N; i++)
    {
        if (block[i] > max)
            max = block[i];
    }

    cout << max;

    return 0;
}