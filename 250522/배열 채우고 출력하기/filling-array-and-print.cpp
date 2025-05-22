#include <iostream>
using namespace std;

#define SIZE 10

int main() {
    char arr[SIZE];
    char C;

    for (int i = 0; i < SIZE; i++)
    {
        cin >> C;
        arr[i] = C;
    }

    for (int i = SIZE - 1; i >= 0; i--)
    {
        cout << arr[i];
    }
    return 0;
}