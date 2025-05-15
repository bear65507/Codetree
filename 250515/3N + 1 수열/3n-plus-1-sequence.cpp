#include <iostream>
using namespace std;

int main() {
    int N, cnt = 0;
    cin >> N;

    int i = N;
    while (true)
    {
        if (i == 1)
            break;
        
        if (i % 2 == 0)
        {
            i /= 2;
            cnt++;
        }
        else
        {
            i = i * 3 + 1;
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}