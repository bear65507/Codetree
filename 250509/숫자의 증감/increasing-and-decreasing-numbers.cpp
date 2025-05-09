#include <iostream>
using namespace std;

int main() {
    char c;
    int n;
    cin >> c >> n;

    if (c == 'A')
        for (int i = 1; i <= n; i++)
            cout << i << " ";
    
    else if (c == 'D')
        for (int i = n; i >= 1; i--)
            cout << i << " ";
            
    return 0;
}