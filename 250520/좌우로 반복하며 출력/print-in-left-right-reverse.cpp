#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < N; j++)
                cout << j + 1;
        }
        else
        {
            for (int k = N; k > 0; k--)
                cout << k;
        }
        cout << endl;
    }
    return 0;
}