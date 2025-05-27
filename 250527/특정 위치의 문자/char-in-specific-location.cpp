#include <iostream>
using namespace std;

int main() {
    const char str[] = "LEBROS";
    char find;
    int length = sizeof(str) / sizeof(str[0]), idx = -1;
    cin >> find;

    for(int i = 0; i < length; i++)
    {
        if (find == str[i])
            idx = i;
    }

    if (idx != -1)
        cout << idx << endl;
    else
        cout << "None" << endl;
    return 0;
}