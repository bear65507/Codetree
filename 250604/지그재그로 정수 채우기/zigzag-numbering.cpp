#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;
    int arr[100][100], cnt = 0;

    for (int i = 0; i < m; i++)
    {
        if (i % 2 == 0)
        { 
            for (int j = 0; j < n; j++)
            {
                arr[j][i] = cnt++;
            }
        }
        else
        {
            cnt--;
            for(int j = n; j >= 0; j--)
            {
                arr[j][i] = cnt++;
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
