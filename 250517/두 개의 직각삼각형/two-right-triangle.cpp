#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++)
    {
        for (int j = N; j > i; j--)
            cout << "*";

        for (int k = N - i; k < N; k++)
            cout << "  ";
        
        for (int r = N; r > i; r--)
            cout << "*";
            
        cout << endl;
    }
    return 0;
}