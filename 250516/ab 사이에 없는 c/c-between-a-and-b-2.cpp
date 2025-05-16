#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    bool IsExistC = false;

    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            IsExistC = true;
            break;
        }
    }
    if (!IsExistC)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}