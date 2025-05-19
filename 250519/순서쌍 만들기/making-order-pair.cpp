#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    for (int i = N; i > 0; i--)
    {
        for (int j = N; j > 0; j--)
        {
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }
    return 0;
}