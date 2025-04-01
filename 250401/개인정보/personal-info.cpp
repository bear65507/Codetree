#include <iostream>
#include <algorithm>
using namespace std;

string name[5];
int height[5];
double weight[5];

class PersonInfo
{
public:
    PersonInfo()
    {

    }
    PersonInfo(string name, int height, double weight)
    {
        this->_name = name;
        this->_height = height;
        this->_weight = weight;
    }
public:
    string _name;
    int _height;
    double _weight;
};

bool CompareByName(PersonInfo p1, PersonInfo p2)
{
    return p1._name < p2._name;
}

bool CompareByHeight(PersonInfo p1, PersonInfo p2)
{
    return p1._height > p2._height;
}

void PrintInfo(PersonInfo pi[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << pi[i]._name << " " << pi[i]._height << " " << pi[i]._weight << endl;
    }
}

int main() {
    PersonInfo pi[5];
    for (int i = 0; i < 5; i++) {
        cin >> name[i] >> height[i] >> weight[i];

        pi[i] = PersonInfo(name[i], height[i], weight[i]);
    }

    sort(pi, pi + 5, CompareByName);
    cout << "name" << endl;
    PrintInfo(pi);

    cout << endl;

    sort(pi, pi + 5, CompareByHeight);
    cout << "height" << endl;
    PrintInfo(pi);

    return 0;
}