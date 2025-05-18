#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < 2 * N + 1; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < 2 * N + 1; j++)
                cout << "* ";
        }
        else
        {
            for (int k = 0; k < 2 * N + 1; k++)
            {
                if (k % 2 == 0)
                    cout << "* ";
                else
                    cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}