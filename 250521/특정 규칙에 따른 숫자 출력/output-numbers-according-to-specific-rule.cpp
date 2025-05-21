#include <iostream>
using namespace std;

int main() {
    int N, cnt = 1;
    cin >> N;

    for (int i = N; i > 0; i--)
    {
        for (int j = N; j > 0; j--)
        {
            if (cnt == 10)
                cnt = 1;
            if (j > i)
                cout << "  ";
            else
            {
                cout << cnt << " ";
                cnt++;
            }
        }

        cout << endl;
    }
    return 0;
}