#include <iostream>
#include <algorithm>
using namespace std;

enum
{
    MAX_SIZE = 1000,
};

int N;
int h[1000];
int w[1000];

class PersonInfo
{
public:
    PersonInfo()
    {

    }
    PersonInfo(int n, int h, int w)
    {
        this->_number = n + 1;
        this->_height = h;
        this->_weight = w;
    }
public:
    int _number = 0;
    int _height;
    int _weight;
};

bool Compare(PersonInfo p1, PersonInfo p2)
{
    if (p1._weight == p2._weight and p1._height == p2._height)
        return p1._number < p2._number;
    else if (p1._height == p2._height)
        return p1._weight > p2._weight;
    else
        return p1._height > p2._height;
}

void Info(PersonInfo p1[], int idx)
{
    cout << p1[idx]._height << " " << p1[idx]._weight << " " << p1[idx]._number << endl;
}

int main() {
    cin >> N;

    PersonInfo pi[MAX_SIZE];
    for (int i = 0; i < N; i++) {
        cin >> h[i] >> w[i];

        pi[i] = PersonInfo(i, h[i], w[i]);
    }

    sort(pi, pi + N, Compare);

    for (int i = 0; i < N; i++)
        Info(pi, i);

    return 0;
}
