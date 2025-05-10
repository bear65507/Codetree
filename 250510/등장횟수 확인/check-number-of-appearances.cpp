#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    vector<int> v;

    for (int i = 0; i < 5; i++)
    {
        cin >> n;
        v.push_back(n);
    }

    int cnt = std::count_if(v.begin(), v.end(), [](int i){ return i % 2 == 0; });
    cout << cnt << endl;

    return 0;
}