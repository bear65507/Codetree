#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n;
string name[10];
int korean[10];
int english[10];
int math[10];

class ScoreInfo
{
public:
    ScoreInfo()
    {

    }
    ScoreInfo(string name, int kor, int eng, int math)
    {
        this->_name = name;
        this->_korean = kor;
        this->_english = eng;
        this->_math = math;
    }
public:
    string _name;
    int _korean;
    int _english;
    int _math;
};

bool Compare(ScoreInfo a, ScoreInfo b)
{
    if (a._korean == b._korean and a._english == b._english)
        return a._math > b._math;
    else if (a._korean == b._korean)
        return a._english > b._english;
    else
        return a._korean > b._korean;
}

void PrintInfo(ScoreInfo arr[], int idx)
{
    cout << arr[idx]._name << " " << arr[idx]._korean << " " << arr[idx]._english << " " << arr[idx]._math << endl;
}

int main() {
    cin >> n;

    ScoreInfo infos[10];
    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> korean[i];
        cin >> english[i];
        cin >> math[i];

        infos[i] = ScoreInfo(name[i], korean[i], english[i], math[i]);
    }
    sort(infos, infos + n, Compare);

    for (int i = 0; i < n; i++)
    {
        PrintInfo(infos, i);
    }

    return 0;
}