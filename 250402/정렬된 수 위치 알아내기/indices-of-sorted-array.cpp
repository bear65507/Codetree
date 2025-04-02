#include <iostream>
#include <algorithm>
using namespace std;

int N;
int sequence[1000];

class Numbers
{
public:
    Numbers()
    {

    }
    Numbers(int i, int v)
    {
        this->_index = i;
        this->_value = v;
    }
public:
    int _index;
    int _currentIndex;
    int _value;
};

bool Compare(Numbers a, Numbers b)
{
    return a._value < b._value;
}

bool CompareByIndex(Numbers a, Numbers b)
{
    return a._index < b._index;
}

void PrintInfo(Numbers ns[])
{
    for (int i = 0; i < N; i++)
    {
        cout << ns[i]._currentIndex << " ";
    }                                       
}

int main() {
    cin >> N;

    Numbers* ns = new Numbers[1000];
    for (int i = 0; i < N; i++) {
        cin >> sequence[i];

        ns[i] = Numbers(i + 1, sequence[i]);
    }

    sort(ns, ns + N, Compare);
    for (int i = 0; i < N; i++)
    {
        ns[i]._currentIndex = i + 1;
    }
    
    sort(ns, ns + N, CompareByIndex);

    PrintInfo(ns);

    delete[] ns;
    return 0;
}
