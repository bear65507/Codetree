#include <iostream>
#include <algorithm>
using namespace std;

int n;
string name[10];
int height[10];
int weight[10];

class Info
{
public:
    Info()
    {

    }
    Info(string n, int h, int w)
    {
        this->_name = n;
        this->_height = h;
        this->_weight = w;
    }
public:
    string _name;
    int _height;
    int _weight;
};

bool compare(Info a, Info b)
{
    return a._height < b._height;
}


int main() {
    cin >> n;

    Info people[10];
    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> height[i];
        cin >> weight[i];
        people[i] = Info(name[i], height[i], weight[i]);
    }

    sort(people, people + n, compare);
    
    for (int i = 0; i < n; i++)
    {
        cout << people[i]._name << " " << people[i]._height << " " << people[i]._weight << endl;
    }

    return 0;
}