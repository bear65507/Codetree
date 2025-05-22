#include <iostream>
#include <vector>
using namespace std;

bool IsPrime(int n)
{
    if (n == 1)
        return false;
        
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

    vector<int> prime_v;
    for (int i = 1; i <= N; i++)
    {
        if (IsPrime(i))
            prime_v.push_back(i);
    }

    for (auto it = prime_v.begin(); it != prime_v.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}