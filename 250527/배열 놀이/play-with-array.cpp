#include <iostream>
using namespace std;

int N, Q, num;

int FindElement(int target, int arr[])
{
    for(int i = 0; i < N; i++)
    {
        if (arr[i] == target)
            return i + 1;
    }
    return 0;
}

int main() {
    int arr[100];
    cin >> N >> Q;

    for (int i = 0; i < N; i++)
    {
        cin >> num;
        arr[i] = num;
    }

    int command, target, from, to;
    for (int i = 0; i < Q; i++)
    {
        cin >> command;
        switch (command)
        {
        case 1:
            cin >> target;
            cout << arr[target - 1] << endl;
            break;
        case 2:
            cin >> target;
            cout << FindElement(target, arr) << endl;
            break;
        case 3:
            cin >> from >> to;
            for (int i = from - 1; i < to; i++)
                cout << arr[i] << " ";
            cout << endl;
            break;
        }

    }
    return 0;
}