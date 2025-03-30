#include <iostream>
using namespace std;

int N;

int Square(int n)
{
    if (n < 10)
        return n * n;
    return Square(n / 10) + ((n % 10) * (n % 10));
}

int main() {
    cin >> N;

    cout << Square(N) << endl;

    return 0;
}