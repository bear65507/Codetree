#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = N; j > i; j--)
        {
            for (int k = N; k > i; k--)
            {
                cout << "*";
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}