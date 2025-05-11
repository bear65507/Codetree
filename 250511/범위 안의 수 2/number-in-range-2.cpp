#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int n, sum = 0;
    vector<int> v;

    for (int i = 0; i < 10; i++)
    {
        cin >> n;
        if (n >= 0 and n <= 200)
            v.push_back(n);
    }

    for (auto it = v.begin(); it != v.end(); it++)
    {
        sum += *it;
    }
    double mean = static_cast<double>(sum) / v.size();

    cout << fixed << setprecision(1);
    cout << sum << " " << mean << endl;

    return 0;
}