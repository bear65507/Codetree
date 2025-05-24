#include <iostream>
using namespace std;

#define SIZE 10

int main() {
    char c;
    char arr[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        cin >> c;
        arr[i] = c;
    }

    for (int i = 0; i < SIZE; i++)
    {
        if (i + 1 == 2 or i + 1 == 5 or i + 1 == 8)
            cout << arr[i] << " ";
    }
    return 0;
}