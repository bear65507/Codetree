#include <iostream>
#include <algorithm>
using namespace std;

int N;
int h[1000];
int w[1000];

enum
{
    MAX_N = 1000,
};

class PersonInfo
{
public:
    PersonInfo()
    {

    }
    PersonInfo(int i, int h, int w)
    {
        this->_number = i + 1;
        this->_height = h;
        this->_weight = w;
    }
public:
    int _number;
    int _height;
    int _weight;
};

bool Compare(PersonInfo p1, PersonInfo p2)
{
    if (p1._height == p2._height)
        return p1._weight > p2._weight;
    return p1._height < p2._height;
}

void PrintInfo(PersonInfo pi[])
{
    for (int i = 0; i < N; i++)
    {
        cout << pi[i]._height << " " << pi[i]._weight << " " << pi[i]._number << endl;
    }
}

int main() {
    cin >> N;

    PersonInfo* pi = new PersonInfo[MAX_N];
    for (int i = 0; i < N; i++) {
        cin >> h[i] >> w[i];

        pi[i] = PersonInfo(i, h[i], w[i]);
    }
    sort(pi, pi + N, Compare);
    
    PrintInfo(pi);

    delete[] pi;

    return 0;
}