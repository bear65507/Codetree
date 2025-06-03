#include <iostream>
using namespace std;

int main() {
    int first[3][3], second[3][3], result[3][3];

    for (int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> first[i][j];

    for (int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> second[i][j];

    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            result[i][j] = first[i][j] * second[i][j];
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}