#include <iostream>
#include <vector>
using namespace std;

int N;
string command[10000];
int num[10000];

vector<int> v;

void PushBack(int num)
{
    v.push_back(num);
}

void Get(int i)
{
    cout << v[i - 1] << endl;
}

void Size()
{
    cout << v.size() << endl;
}

void PopBack()
{
    v.pop_back();
}
int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push_back" || command[i] == "get") {
            cin >> num[i];
        }
        if (command[i] == "push_back")
            PushBack(num[i]);
        else if (command[i] == "get")
            Get(num[i]);
        else if (command[i] == "size")
            Size();
        else if (command[i] == "pop_back")
            PopBack();
    }

    return 0;
}
