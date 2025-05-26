#include <iostream>
using namespace std;

int main() {
    int N, M;
    int digit[9] = {0};
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> M;
        digit[M - 1]++;
    }

    for (int i = 0; i < 9; i++)
    {
        cout << digit[i] << endl;
    }
    return 0;
}