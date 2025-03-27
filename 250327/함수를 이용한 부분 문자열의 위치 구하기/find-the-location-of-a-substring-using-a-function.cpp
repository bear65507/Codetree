#include <iostream>
#include <string>
using namespace std;

string text;
string pattern;

int ans;

bool IsSame(int tidx)
{
    int pidx = 0;
    while (tidx < text.length())
    {
        if (pidx == pattern.length())
            return true;
        if (text[tidx] != pattern[pidx])
            return false;
        tidx++;
        pidx++;
    }
    return true;
}

bool ReverseIsSame(int tidx)
{
    int endtdix = text.length() - 1;
    int pidx = pattern.length() - 1;

    for (int i = tidx; i >= 0; i--) 
    {
        if (pidx < 0)
            return true;
        if (text[i] != pattern[pidx])
            return false;
        pidx--;
    }
    return true;
}

bool FindIndex()
{
    for (int i = 0; i < text.length(); i++)
    {
        for (int j = 0; j < pattern.length(); j++)
        {
            if (text[i] == pattern[j])
                if (IsSame(i))
                {
                    ans = i;
                    return true;
                }
        }
    }
    return false;
}

bool ReverseFindIndex()
{
    for (int i = text.length() - 1; i >= 0; i--)
    {
        for (int j = pattern.length() - 1; j >= 0; j--)
        {
            if (text[i] == pattern[j])
                if (ReverseIsSame(i))
                    return true;
        }
    }
    return false;
}

int IsAnswer()
{
    if (FindIndex() and ReverseFindIndex())
        return ans;
    else
        return -1;
}
int main() {
    cin >> text;
    cin >> pattern;

    cout << IsAnswer() << endl;

    return 0;
}