#include <iostream>
#include <string>
#include <list>
using namespace std;

int n, m;
string s;

int main() {
    list<char> l;
    list<char>::iterator it;
    cin >> n >> m;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        l.push_back(s[i]);
    }

    it = l.end();
    it--;
    for (int i = 0; i < m; i++) {
        //cout << *it << endl;
        char command;
        cin >> command;

        if (command == 'P') {
            char c;
            cin >> c;
            l.insert(++it, c);
        }
        else if (command == 'L')
        {
            if (it == l.begin())
                continue;
            else
                it--;
        }
        else if (command == 'R')
        {
            if (it != l.end())
                it++;
        }
        else if (command == 'D')
        {
            if (it == l.end())
                continue;
            else
                it = l.erase(it);
        }
    }

    for (it = l.begin(); it != l.end(); it++)
        cout << *it;
    
    return 0;
}
