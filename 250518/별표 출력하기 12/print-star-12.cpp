#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == 0)
            {
                cout << "* ";
                continue;
            }

            if (j % 2 == 1 and i <= j)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}