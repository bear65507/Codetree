#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";

        }
        for (int k = 0; k < i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}