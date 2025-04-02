#include <iostream>
#include <algorithm>
using namespace std;

enum
{
    MAX_N = 10
};

int n;
string name[10];
int height[10];
int weight[10];

class PersonInfo
{
public:
    PersonInfo()
    {

    }
    PersonInfo(string name, int height, int weight)
    {
        this->_name = name;
        this->_height = height;
        this->_weight = weight;
    }
public:
    string _name;
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
    for (int i = 0; i < n; i++)
    {
        cout << pi[i]._name << " " << pi[i]._height << " " << pi[i]._weight << endl;
    }
}

int main() {
    cin >> n;

    PersonInfo pi[MAX_N];
    for (int i = 0; i < n; i++) {
        cin >> name[i] >> height[i] >> weight[i];

        pi[i] = PersonInfo(name[i], height[i], weight[i]);
    }

    sort(pi, pi + n, Compare);

    PrintInfo(pi);

    return 0;
}