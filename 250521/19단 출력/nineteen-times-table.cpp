#include <iostream>
using namespace std;

int main() {
    int N = 19;
    
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (j % 2 == 0 or j == N)
                cout << i << " * " << j << " = " << i * j << endl;
            else
                cout << i << " * " << j << " = " << i * j << " / ";
        }
    }
    return 0;
}