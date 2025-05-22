#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, a, b, sum;
    cin >> N;

    vector<int> even_v;
    for (int i = 0; i < N; i++)
    {
        sum = 0;
        cin >> a >> b;
        for (int j = a; j <= b; j++)
        {
            if (j % 2 == 0)
                sum += j;
        }
        even_v.push_back(sum);
    }

    for (int even : even_v)
    {
        cout << even << endl;
    }

    return 0;
}