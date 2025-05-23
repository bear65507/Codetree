#include <iostream>
using namespace std;

#define SIZE 100

int main() {
    int arr[SIZE];
    int sum = 0;

    for (int i = 0; i < SIZE; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
        {
            sum = arr[i - 3] + arr[i - 2] + arr[i - 1];
            break;
        }
    }

    cout << sum << endl;
    
    return 0;
}