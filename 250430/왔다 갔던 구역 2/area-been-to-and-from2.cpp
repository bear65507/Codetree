#include <iostream>
using namespace std;

int n;
int x[100];
char dir[100];
int coord[2000] = { 0 }; 

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }

    int pos = 999;
    for (int i = 0; i < n; i++)
    {
        if (dir[i] == 'L')
        {
            for (int j = 0; j < x[i]; j++)
            {
                coord[pos--]++;
            }
        }
        else if (dir[i] == 'R')
        {
            for (int j = 0; j < x[i]; j++)
            {
                coord[pos++]++;
            }
        }
    }

    int cnt = 0;
    for (int i = 0; i < 2000; i++)
    {
        if (coord[i] > 1)
            cnt++;
    }

    cout << cnt << endl;

    return 0;
}