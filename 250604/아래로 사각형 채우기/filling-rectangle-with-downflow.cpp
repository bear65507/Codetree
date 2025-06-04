#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << 1 + i + (N * j) << " ";
        }
        cout << endl;
    }
    return 0;
}