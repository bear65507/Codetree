#include <iostream>
using namespace std;

void Swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b, sum = 0; 
    cin >> a >> b;

    if (a > b)
        Swap(a, b);
        
    for (int i = a; i <= b; i++)
    {
        if (i % 5 == 0)
            sum += i;
    }

    cout << sum << endl;

    return 0;
}