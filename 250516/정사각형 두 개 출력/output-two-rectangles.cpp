#include <iostream>
using namespace std;

void MakeSquare(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << "*";
        cout << endl;
    }
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < 2; i++)
    {
        MakeSquare(N);
        cout << endl;
    }

    return 0;
}