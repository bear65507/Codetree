#include <iostream>
using namespace std;

int main() {
    int N;
    bool IsMultiply3 = true;

    for (int i = 0; i < 5; i++)
    {
        cin >> N;
        if (N % 3 != 0)
        {
            IsMultiply3 = false;
            break;
        }
    }

    cout << IsMultiply3 << endl;

    return 0;
}