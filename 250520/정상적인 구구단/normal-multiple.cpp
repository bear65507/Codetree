#include <iostream>
using namespace std;

int main() {
    int N, flag = 1;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        flag = 1;
        for (int j = 1; j <= N; j++)
        {
            if (flag == N)
            {
                cout << i << " * " << j << " = " << i * j;
            }
            else
            {
                cout << i << " * " << j << " = " << i * j << ", ";
                flag++;
            }
        }
        cout << endl;
    }
    return 0;
}