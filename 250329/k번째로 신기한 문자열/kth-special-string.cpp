#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n, k;
string t;
string str[100];
string dictionary[100];

void FindWords(int find)
{
    int idx = 0;
    int cnt;
    sort(str, str + n);

    for (int i = 0; i < n; i++)
    {
        cnt = 0;
        for (int j = 0; j < t.length(); j++)
        {
            if (t[j] == str[i][j])
                cnt++;
            if (cnt == t.length())
            {
                dictionary[idx] = str[i];
                idx++;
            }
        }
    }

    sort(dictionary, dictionary + (idx));

    cout << dictionary[k - 1] << endl;
}

int main() {
    cin >> n >> k >> t;

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    FindWords(k);

    return 0;
}