#include <iostream>
using namespace std;

int main() {
    int N, cnt = 2;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (cnt > 9)
                cnt = 2;
            cout << cnt << " ";
            cnt += 2;
        }
        cout << endl;
    }
    return 0;
}