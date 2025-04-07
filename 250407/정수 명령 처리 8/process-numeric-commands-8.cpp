#include <iostream>
#include <string>
#include <list>
using namespace std;

int N;
string command[10000];
int A[10000];

int main() {
    list<int> l;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push_front" || command[i] == "push_back") {
            cin >> A[i];
            if (command[i] == "push_front")
                l.push_front(A[i]);
            else if (command[i] == "push_back")
                l.push_back(A[i]);
        }
        else if (command[i] == "pop_front" or command[i] == "pop_back")
        {
            if (command[i] == "pop_front")
            {
                cout << l.front() << endl;
                l.pop_front();
            }
            else if (command[i] == "pop_back")
            {
                cout << l.back() << endl;
                l.pop_back();
            }
        }
        else if(command[i] == "size")
            cout << l.size() << endl;
        else if (command[i] == "empty")
        {
            if (l.size() == 0)
                cout << "1" << endl;
            else
                cout << "0" << endl;
        }
        else if (command[i] == "front")
            cout << l.front() << endl;
        else if (command[i] == "back")
            cout << l.back() << endl;
    }

    return 0;
}
