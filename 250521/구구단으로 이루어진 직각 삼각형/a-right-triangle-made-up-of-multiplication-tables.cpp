#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (j == N - i + 1)
                cout << i << " * " << j << " = " << i * j;
            else if (j < N - i + 1)
                cout << i << " * " << j << " = " << i * j << " / ";
        }
        cout << endl;
    }
    return 0;
}