#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i % 2 == 0)
                cout << (j + 1) + (i * N) << " ";
            else
                cout << (N - j) + (i * N) << " ";
        }
        cout << endl;
    }
    return 0;
}