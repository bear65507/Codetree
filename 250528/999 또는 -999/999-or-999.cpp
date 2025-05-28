#include <iostream>
using namespace std;

int main() {
    //int arr[100];
    int N, i = 0, min = 1000, max = -1000;

    while(cin >> N)
    {
        if (N == 999 or N == -999)
            break;
        //arr[i] = N;
        max = (max > N ? max : N);
        min = (min < N ? min : N);
        i++;
    }

    cout << max << " " << min << endl;
    return 0;
}