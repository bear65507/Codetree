#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = N; i > 0; i--)
    {
        for (int j = 0; j < N - i; j++)
            cout << "  ";
        
        for (int k = 0; k < 2 * i - 1; k++)
            cout << "* ";

        cout << endl;
    }

    for (int i = 1; i < N; i++)
    {
        for (int j = 1; j < N - i; j++)
            cout << "  ";
        
        for (int k = 0; k < 2 * i + 1; k++)
            cout << "* ";
        
        cout << endl;
    }
    return 0;
}