#include <iostream>
#include <iomanip>
using namespace std;

#define SIZE 10

int main() {
    int arr[SIZE];
    int sum = 0;
    double mean;

    for (int i = 0; i < SIZE; i++)
    {
        cin >> arr[i];
        if ((i + 1) % 2 == 0)
            sum += arr[i];
        if ((i + 1) % 3 == 0)
            mean += arr[i];
        
    }
    mean /= 3.0;
    cout << fixed << setprecision(1);
    cout << sum << " " << mean << endl;

    return 0;
}