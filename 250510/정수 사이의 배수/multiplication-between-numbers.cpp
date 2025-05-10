#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b, sum = 0, cnt = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (i % 5 == 0 or i % 7 == 0)
        {
            cnt++;
            sum += i;
        }
    }

    double mean = static_cast<double>(sum) / cnt;
    cout << fixed << setprecision(1);

    cout << sum << " " << mean << endl;

    return 0;
}