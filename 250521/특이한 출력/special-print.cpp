#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if ((i + j) % 4 == 0)
                cout << "(" << i << ", " << j << ") " << endl;
            else
                cout << "(" << i << ", " << j << ") ";
        }
    }
    return 0;
}