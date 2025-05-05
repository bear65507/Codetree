#include <iostream>
#include <stack>
using namespace std;

int N;
string command[10000];
int value[10000];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push") {
            cin >> value[i];
        }
    }

    int j = 0;
    stack<int> s;
    for (int i = 0; i < N; i++)
    {
        if (command[i] == "push")
        {
            s.push(value[i]);
           
        }
        else if (command[i] == "pop")
        {
            cout << s.top() << endl;
            s.pop();
        }
        else if (command[i] == "size")
        {
            cout << s.size() << endl;
        }
        else if (command[i] == "empty")
        {
            cout << s.empty() << endl;
        }
        else if (command[i] == "top")
        {
            cout << s.top() << endl;
        }
    }

    return 0;
}
