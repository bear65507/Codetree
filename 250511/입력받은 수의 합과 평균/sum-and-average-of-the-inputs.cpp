#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int N, num, sum = 0;
    vector<int> v;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> num;
        v.push_back(num);
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