#include <iostream>
#include <iomanip>
using namespace std;

#define SIZE 10

int main() {
    int N, sum = 0, cnt = 0;
    double mean;

    for (int i = 0; i < SIZE; i++)
    {
        cin >> N;
        if (N == 0)
            break;
        sum += N;
        cnt++;
    }
    mean = static_cast<double>(sum) / cnt;
    cout << fixed << setprecision(1);

    cout << sum << " " << mean << endl;

    return 0;
}