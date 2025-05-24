#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N;
    
    for (int i = 0; i < N; i++)
    {
        cin >> M;
        cout << M * M << " ";
    }
    return 0;
}