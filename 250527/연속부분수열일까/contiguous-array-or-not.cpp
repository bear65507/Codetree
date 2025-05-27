#include <iostream>
using namespace std;

bool IsMCNSS(int a[], int b[], int a_length, int b_length)
{
    for (int i = 0; i < a_length; i++)
    {
        if (a[i] == b[0] and (i + b_length <= a_length))
        {
            int cnt = 0, b_idx = 0;
            for (int j = i; j < i + b_length; j++)
            {
                if (a[j] == b[b_idx++])
                    cnt++;
                else
                    break;
            }
            if (cnt == b_length)
            {
                return true;
            }
            i += cnt;
        }
    }
    return false;
}

int main() {
    int n1, n2, a[100], b[100];
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++)
        cin >> a[i];
    for (int j = 0; j < n2; j++)
        cin >> b[j];

    int a_length = n1, b_length = n2;


    if (IsMCNSS(a, b, a_length, b_length))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}