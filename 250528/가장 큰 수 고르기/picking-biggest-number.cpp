#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int max = -1;
    
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        max = (max > arr[i] ? max : arr[i]);
    }

    cout << max << endl;
    return 0;
}