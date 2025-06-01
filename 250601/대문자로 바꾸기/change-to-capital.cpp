#include <iostream>
using namespace std;

int main() {
    char C;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> C;
            cout << static_cast<char>(C - 32) << " ";
        }
        cout << endl;
    }
    return 0;
}