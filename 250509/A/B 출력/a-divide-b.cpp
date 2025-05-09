#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << a / b << ".";
    for (int i = 0; i < 20; i++)
    {
        a = (a - (b * (a / b))) * 10;
        cout << a / b;
    }


    return 0;
}