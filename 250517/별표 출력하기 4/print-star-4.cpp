#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = N; j > i; j--)
            cout << "* ";
        cout << endl;
    }

    for (int i = 1; i < N; i++)
    {
        for (int k = 0; k <= i; k++)
            cout << "* ";
        cout << endl;
    }
    return 0;
}