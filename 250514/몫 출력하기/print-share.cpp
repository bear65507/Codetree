#include <iostream>
using namespace std;

int main() {
    int input, cnt = 0;
    while (cin >> input)
    {
        if (cnt > 3)
            break;
            
        if (input % 2 == 0)
        {
            cout << input / 2 << endl;
            cnt++;
        }
    }
    return 0;
}