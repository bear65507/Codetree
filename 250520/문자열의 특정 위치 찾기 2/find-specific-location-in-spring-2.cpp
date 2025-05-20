#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> v{"apple", "banana", "grape", "blueberry", "orange"};
    vector<string> res;
    char c;
    int cnt = 0;
    cin >> c;

    for (string word : v)
    {
        if (word[2] == c or word[3] == c)
        {
            res.push_back(word);
            cnt++;
        }
    }

    auto it = res.begin();
    for (it; it != res.end(); it++)
    {
        cout << *it << endl;
    }
    cout << cnt << endl;

    return 0;
}