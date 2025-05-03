#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n;
    vector<int> v;
    for (int i = 0; i < 3; i++)
    {
        cin >> n;
        v.push_back(n);
    }

    int max = (v[0] > v[1] ? v[0] : v[1]);
    max = (max > v[2] ? max : v[2]);
    int min = (v[0] < v[1] ? v[0] : v[1]);
    min = (min < v[2] ? min : v[2]);

    int median;
    for (int i = 0; i < 3; i++)
    {
        if (v[i] > min and v[i] < max)
            median = v[i];
    }

    cout << median << endl;
    return 0;
}