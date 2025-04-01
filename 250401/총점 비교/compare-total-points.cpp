#include <iostream>
#include <algorithm>
using namespace std;

int n;
string name[10];
int score1[10];
int score2[10];
int score3[10];

class Scoreboard
{
public:
    Scoreboard()
    {

    }
    Scoreboard(string name, int s1, int s2, int s3)
    {
        this->_name = name;
        this->_score1 = s1;
        this->_score2 = s2;
        this->_score3 = s3;
        this->_sum = s1 + s2 + s3;
    }
public:
    string _name;
    int _score1;
    int _score2;
    int _score3;
    int _sum;
};

bool Compare(Scoreboard s1, Scoreboard s2)
{
    if (s1._sum == s2._sum)
        return false;
    return s1._sum < s2._sum;
}

void PrintInfo(Scoreboard sb[], int idx)
{
    cout << sb[idx]._name << " " << sb[idx]._score1 << " " << sb[idx]._score2 << " " << sb[idx]._score3 << endl;
}

int main() {
    cin >> n;

    Scoreboard sb[10];
    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> score1[i];
        cin >> score2[i];
        cin >> score3[i];

        sb[i] = Scoreboard(name[i], score1[i], score2[i], score3[i]);
    }

    sort(sb, sb + n, Compare);

    for (int i = 0; i < n; i++)
        PrintInfo(sb, i);

    return 0;
}