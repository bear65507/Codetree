#include <iostream>
using namespace std;

#define SIZE 9

int main() {
    int N;
    int arr[SIZE];
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int score, sum = 0;
        for (int j = 0; j < 4; j++)
        {
            cin >> score;
            sum += score;
        }
        double mean = static_cast<double>(sum) / 4;
        arr[i] = mean;
    }

    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] >= 60.0)
        {
            cout << "pass" << endl;
            cnt++;
        }
        else
            cout << "fail" << endl;
    }

    cout << cnt << endl;

    return 0;
}