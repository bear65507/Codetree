#include <iostream>
using namespace std;

int n;
int x1[100], x2[100];

enum
{
    MAX_RANGE = 100,
};

int Space(int x1[], int x2[])
{
    int space[MAX_RANGE] = { 0 };
    for (int i = 0; i < n; i++)
    {
        for (int j = x1[i] - 1; j <= x2[i] - 1; j++)
        {
            space[j]++;
        }
    }

    int max = -1;
    for (int i = 0; i < MAX_RANGE; i++)
    {
        if (space[i] > max)
        {
            max = space[i];
        }
    }

    return max;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    cout << Space(x1, x2) << endl;

    return 0;
}