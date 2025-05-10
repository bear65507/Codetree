#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;
    int year;
    cin >> year;

    for (int i = 1; i <= year; i++)
    {
        v.push_back(i);
    }

    struct IsYoon
    {
        bool operator()(int y)
        {
            return (y % 4 == 0 and y % 100 != 0) or y % 400 == 0;
        }
    };

    int cnt = std::count_if(v.begin(), v.end(), IsYoon());
    cout << cnt << endl;

    return 0;
}