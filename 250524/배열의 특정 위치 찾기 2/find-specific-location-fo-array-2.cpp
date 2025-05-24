#include <iostream>
using namespace std;

int main() {
    int N, sum_even = 0, sum_odd = 0;

    for (int i = 0; i < 10; i++)
    {   
        cin >> N;
        if ((i + 1) % 2 == 0)
            sum_even += N;
        else
            sum_odd += N;
    }

    int res = (sum_even > sum_odd ? sum_even - sum_odd : sum_odd - sum_even);

    cout << res << endl;

    return 0;
}