#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;
    int n;

    for(int i = 0; i < 10; i++)
    {
        cin >> n;
        v.push_back(n);
    }

    struct IsOdd
    {
        bool operator()(int n)
        {
            return n % 2 != 0;
        }
    };

    int cnt = std::count_if(v.begin(), v.end(), IsOdd());
    cout << cnt << endl;
    return 0;
}