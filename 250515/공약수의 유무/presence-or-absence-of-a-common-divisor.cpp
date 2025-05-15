#include <iostream>
using namespace std;

enum NUMBERS
{
    N1 = 1920,
    N2 = 2880
};

int main() {
    int a, b;
    cin >> a >> b;

    bool IsDivisor = false;
    for (int i = a; i <= b; i++)
    {
        if (N1 % i == 0 and N2 % i == 0)
        {
            IsDivisor = true;
            break;
        }
    }
    cout << IsDivisor << endl;

    return 0;
}