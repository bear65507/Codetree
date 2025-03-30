#include <iostream>
#define MAX_N 5
using namespace std;

char codename[MAX_N];
int score[MAX_N];

class CodeName
{
public:
    CodeName()
    {

    }
    CodeName(char codename, int score)
    {
        this->_codename = codename;
        this->_score = score;
    }

public:
    char _codename;
    int _score;
};

void FindMinScore(CodeName arr[])
{
    int min = 101;
    int min_index = 0;
    for (int i = 0; i < MAX_N; i++)
    {
        if (arr[i]._score < min)
        {
            min = arr[i]._score;
            min_index = i;
        }
    }
    cout << arr[min_index]._codename << " " << arr[min_index]._score << endl;
}

int main() {
    for (int i = 0; i < MAX_N; i++) {
        cin >> codename[i] >> score[i];
    }

    CodeName Agents[MAX_N];
    for (int i = 0; i < MAX_N; i++)
    {
        Agents[i] = CodeName(codename[i], score[i]);
    }

    FindMinScore(Agents);

    return 0;
}