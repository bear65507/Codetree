#include <iostream>
using namespace std;

int main() {
    int N, cnt = 9;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (cnt < 1)
                cnt = 9;
            cout << cnt--;
        }
        cout << endl;
    }
    return 0;
}