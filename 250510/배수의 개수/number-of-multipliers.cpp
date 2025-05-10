#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;
    int n;

    for (int i = 0; i < 10; i++)
    {
        cin >> n;
        v.push_back(n);
    }

    auto isMultiplyBy3 = [](int i) { return i % 3 == 0; };
    auto isMultiplyBy5 = [](int i) { return i % 5 == 0; };

    int cnt3 = std::count_if(v.begin(), v.end(), isMultiplyBy3);
    int cnt5 = std::count_if(v.begin(), v.end(), isMultiplyBy5);

    cout << cnt3 << " " << cnt5 << endl;
    return 0;
}