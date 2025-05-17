#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << "*";
        cout << endl << endl;
    }

    for (int i = 1; i < N; i++)
    {
        for (int k = N; k > i; k--)
            cout << "*";
        cout << endl << endl;
    }

    return 0;
}