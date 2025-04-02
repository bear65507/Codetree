#include <iostream>
#include <algorithm>
using namespace std;

int N;
int x[1000];
int y[1000];

enum
{
    MAX_N = 1000
};

class Pos
{
public:
    Pos()
    {

    }
    Pos(int x, int y, int number)
    {
        this->_x = x;
        this->_y = y;
        this->_number = number;
    }

    void GetManhattanDis()
    {
        int posX, posY;
        if (_x < 0)
            posX = -_x;
        else
            posX = _x;
        if (_y < 0)
            posY = -_y;
        else
            posY = _y;
        _distance = posX + posY;
    }

public:
    int _x;
    int _y;
    int _distance = -1;
    int _number;
};

bool Compare(Pos p1, Pos p2)
{
    if (p1._distance == p2._distance)
        return p1._number < p2._number;
    return p1._distance < p2._distance;
}

void PrintInfo(Pos p[])
{
    for (int i = 0; i < N; i++)
    {
        cout << p[i]._number << endl;
    }
}

int main() {
    cin >> N;

    Pos* p = new Pos[MAX_N];
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];

        p[i] = Pos(x[i], y[i], (i + 1));
        p[i].GetManhattanDis();
    }

    sort(p, p + N, Compare);

    PrintInfo(p);

    delete[] p;
    return 0;
}
