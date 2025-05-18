#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= 2 * N; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 1; j <= i; j += 2)
                cout << "* ";
        }
        else
        {
            for (int k = 2 * N; k >= i; k -= 2)
                cout << "* ";
        }
        cout << endl;
    }
    return 0;
}