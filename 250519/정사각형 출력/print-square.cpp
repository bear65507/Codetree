#include <iostream>
using namespace std;

int main() {
    int N, cnt = 0;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << ++cnt << " ";
        }
        cout << endl;
    }
    return 0;
}