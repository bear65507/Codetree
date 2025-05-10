#include <iostream>
using namespace std;

int main() {
    int n, cleanClass = 0, cleanHalf = 0, cleanRest = 0;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        if (i % 12 == 0)
            cleanRest++;
        if (i % 12 != 0 and i % 3 == 0)
            cleanHalf++;
        if (i % 12 != 0 and i % 3 != 0 and i % 2 == 0)
            cleanClass++;
    }

    cout << cleanClass << " " << cleanHalf << " " << cleanRest << endl;
    return 0;
}