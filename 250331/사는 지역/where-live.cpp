#include <iostream>
#define MAX_N 10
using namespace std;

int n;
string name[MAX_N], street_address[MAX_N], region[MAX_N];

class PersonInfo
{
public:
    PersonInfo() { }
    PersonInfo(string n, string a, string r)
    {
        this->_name = n;
        this->_address = a;
        this->_region = r;
    }
public:
    string _name;
    string _address;
    string _region;
};

int Compare(PersonInfo infos[])
{
    string word = " ";
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        if (infos[i]._name > word)
        {
            word = infos[i]._name;
            idx = i;
        }
    }
    return idx;
}

int main() {
    cin >> n;

    int targetIdx;
    PersonInfo Infos[MAX_N];
    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> street_address[i];
        cin >> region[i];

        Infos[i] = PersonInfo(name[i], street_address[i], region[i]);
    }

    targetIdx = Compare(Infos);

    cout << "name " << Infos[targetIdx]._name << endl;
    cout << "addr " << Infos[targetIdx]._address << endl;
    cout << "city " << Infos[targetIdx]._region << endl;

    return 0;
}