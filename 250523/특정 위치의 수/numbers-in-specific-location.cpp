#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> N;
        if (i == 2 or i == 4 or i == 9)
            sum += N;
    }

    cout << sum << endl;
    
    return 0;
}