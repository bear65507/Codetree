#include <iostream>
using namespace std;

int main() {
    int N;
    int arr[50];
    int Mul5Cnt = 0, cnt = 0, temp;
    cin >> N;
    temp = N;

    for (int i = 0; i < 50; i++)
    {
        arr[i] = temp;
        cnt++;
        if (temp % 5 == 0)
            Mul5Cnt++;
        if (Mul5Cnt >= 2)
            break;
        temp += N;
    }

    for (int i = 0; i < cnt; i++)
        cout << arr[i] << " ";

    return 0;
}