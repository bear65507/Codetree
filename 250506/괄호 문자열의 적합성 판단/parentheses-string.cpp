#include <iostream>
#include <string>
#include <stack>
using namespace std;

string str;

bool ParenthesesStr(string str)
{
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(')
            s.push('(');
        else
        {
            if (s.empty() == true)
                return false;
            s.pop();
        }
    }
    if (s.empty() == false)
        return false;
    return true;
}

int main() {
    cin >> str;

    if (ParenthesesStr(str))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
