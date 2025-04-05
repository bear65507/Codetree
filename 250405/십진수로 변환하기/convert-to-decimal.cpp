#include <iostream>
using namespace std;

char binary[9];

int main() {
    cin >> binary;
    int num = 0;

    int idx = 0;
    while (idx < 9)
    {
        if (binary[idx] == '0')
            num = num * 2;
        else if (binary[idx] == '1')
            num = num * 2 + 1;
        idx++;
    }
    cout << num << endl;

    return 0;
}