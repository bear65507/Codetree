#include <iostream>
using namespace std;

bool IsPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int N;
    cin >> N;
    
    if (IsPrime(N))
        cout << "P" << endl;
    else
        cout << "C" << endl;

    return 0;
}