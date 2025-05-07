#include <iostream>
#include <queue>
using namespace std;

int N, K;

int main() {
    cin >> N >> K;
    queue<int> q;
    for (int i = 1; i <= N; i++)
        q.push(i);
    
    while (q.size() != 1)
    {
        for (int i = 1; i < K; i++)
        {
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << " ";
        q.pop();
    }
    cout << q.front() << endl;

    return 0;
}
