#include <iostream>
#include <string>
using namespace std;

string text;
string pattern;

bool IsSame(int tidx)
{
    int pidx = 0;
    while (tidx < text.length())
    {
        if (text[tidx] != pattern[pidx])
            return false;
        tidx++;
        pidx++;
    }
    return true;
}

int FindIndex()
{
    for (int i = 0; i < text.length(); i++)
    {
        for (int j = 0; j < pattern.length(); j++)
        {
            if (text[i] == pattern[j])
                if (IsSame(i))
                    return i;
        }
    }
    return -1;
}

int main() {
    cin >> text;
    cin >> pattern;

    cout << FindIndex() << endl;

    return 0;
}