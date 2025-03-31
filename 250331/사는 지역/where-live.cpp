#include <iostream>
#define MAX_N 10

using namespace std;

int n;
string name[MAX_N], street_address[MAX_N], region[MAX_N];

class Info
{
public:
    Info()
    {

    }
    Info(string name, string address, string region)
    {
        this->_name = name;
        this->_address = address;
        this->_region = region;
    }
public:
    string _name;
    string _address;
    string _region;
};

int FindLastName(Info info[])
{
    int idx = 0;
    int last_idx = -1;
    while (info[idx]._name != "")
    {
        if (info[idx]._name[0] > info[idx + 1]._name[0])
        {
            last_idx = idx;
        }
        idx++;
    }

    return last_idx;
}

void PrintInfo(Info infos[], int idx)
{
    cout << "name " << infos[idx]._name << endl;
    cout << "addr " << infos[idx]._address << endl;
    cout << "city " << infos[idx]._region << endl;
}

int main() {
    cin >> n;

    int idx = 0;
    Info infos[MAX_N];
    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> street_address[i];
        cin >> region[i];

        Info info = Info(name[i], street_address[i], region[i]);
        infos[i] = info;
    }
    
    idx = FindLastName(infos);
    PrintInfo(infos, idx);

    return 0;
}