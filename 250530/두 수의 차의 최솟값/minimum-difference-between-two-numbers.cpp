#include <iostream>
using namespace std;

int main() {
    int N, min = 101;
    int arr[10];
    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    for (int i = 1; i < N; i++)
        min = (arr[i] - arr[i - 1] < min ? arr[i] - arr[i - 1] : min);

    cout << min << endl;

    return 0;   
}