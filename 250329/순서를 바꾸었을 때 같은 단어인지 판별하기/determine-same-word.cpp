#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string word1;
string word2;


bool IsSameWord(string& word1, string& word2)
{
    sort(word1.begin(), word1.end());
    sort(word2.begin(), word2.end());

    if (word1.length() != word2.length())
        return false;

    for (int i = 0; i < word1.length(); i++)
    {
        if (word1[i] != word2[i])
        {
            return false;
        }
    }
    return true;;
}

int main() {
    cin >> word1;
    cin >> word2;

    if (IsSameWord(word1, word2))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    
    return 0;
}
