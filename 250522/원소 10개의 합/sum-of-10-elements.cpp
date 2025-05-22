#include <iostream>
using namespace std;

#define SIZE 10

int main() {
    int n, sum = 0;

    for (int i = 0; i < SIZE; i++)
    {
        cin >> n;
        sum += n;
    }

    cout << sum << endl;
    
    return 0;
}