#include <iostream>
using namespace std;

int N;

int main() {
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j < N - i; j++)
            cout << " ";
        
        for (int k = 0; k < 2 * i - 1; k++)
            cout << "*";
        cout << endl;
    }

    for (int i = N - 1; i > 0; i--)
    {
        for (int j = 0; j < N - i; j++)
            cout << " ";

        for (int k = 0; k < 2 * i - 1; k++)
            cout << "*";
        cout << endl;
    }

    return 0;
}
