#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M, cnt;
    vector<int> countRes;
    cin >> M;

    for (int i = 0; i < M; i++)
    {
        cnt = 0;
        cin >> N;
        while (N != 1)
        {
            if (N % 2 == 0)
            {
                N /= 2;
                cnt++;
            }
            else
            {
                N = N * 3 + 1;
                cnt++;
            }
        }
        countRes.push_back(cnt);
    }

    for (int res : countRes)
    {
        cout << res << endl;
    }

    return 0;
}