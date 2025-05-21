#include <iostream>
using namespace std;

int main() {
    char alpha = 'A';
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (alpha > 'Z')
                alpha = 'A';
            cout << alpha;
            alpha++;
        }
        cout << endl;
    }
    return 0;
}