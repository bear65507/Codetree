#include <iostream>
using namespace std;

int main() {
    int N, res, prod = 1;
    cin >> N;

    for (int i = 1; i <= 10; i++)
    {
        prod *= i;
        if (prod >= N)
        {
            res = i;
            break;
        }
    }
    cout << res << endl;
    
    return 0;
}