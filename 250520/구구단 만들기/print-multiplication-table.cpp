#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    for (int i = 1; i <= 9; i++)
    {
        for (int j = b; j >= a; j--)
        {
            if (j % 2 == 0)
            {
                if (j - 1 < a)
                    cout << j << " * " << i << " = " << j * i;
                else
                    cout << j << " * " << i << " = " << j * i << " / ";
            }
        }
        cout << endl;
    }

    return 0;
}