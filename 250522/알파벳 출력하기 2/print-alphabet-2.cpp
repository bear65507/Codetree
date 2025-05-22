#include <iostream>
using namespace std;

int main() {
    char al = 'A';
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (al > 'Z')
                al = 'A';
                
            if (j < i)
                cout << "  ";
            else
            {
                cout << al << " ";
                al++;
            }
        }
        cout << endl;
    }

    return 0;
}