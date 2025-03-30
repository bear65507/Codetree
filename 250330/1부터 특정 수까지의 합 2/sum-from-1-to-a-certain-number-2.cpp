#include <iostream>

using namespace std;

int N;
int sum = 0;
int Sum(int n)
{
    if (n == 1)
        return 1;
    sum = n + Sum(n - 1);

    return sum;
}

int main() {
    cin >> N;

    cout << Sum(N) << endl;

    return 0;
}