#include <iostream>
using namespace std;

void Calulate(int f, int s, int arr[])
{
    arr[0] = f;
    arr[1] = s;
    for (int i = 2; i < 10; i++)
    {
        arr[i] = (arr[i - 1] + arr[i - 2]) % 10;
    }
}

int main() {
    int first, second;
    int arr[10];
    cin >> first >> second;
    
    Calulate(first, second, arr);

    for(int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}