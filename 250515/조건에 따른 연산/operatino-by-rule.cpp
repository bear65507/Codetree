#include <iostream>
using namespace std;

int main() {
    int N, cnt = 0;
    cin >> N;

    int i = N;
    while(i < 1000)
    {
        if (i % 2 == 0)
            i = i * 3 + 1;
        else
            i = i * 2 + 2;
        cnt++;
    }
    cout << cnt << endl;

    return 0;
}