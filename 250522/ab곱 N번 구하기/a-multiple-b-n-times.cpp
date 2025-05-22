#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, a, b;
    vector<int> result;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int temp = 1;
        cin >> a >> b;
        for (int j = a; j <= b; j++)
        {
            temp *= j;
        }
        result.push_back(temp);
    }

    for (auto it = result.begin(); it != result.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}