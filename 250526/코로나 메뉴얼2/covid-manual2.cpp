#include <iostream>
using namespace std;

int main() {
    int T;
    char C;
    int area[4] = {0};

    for (int i = 0; i < 3; i++)
    {
        cin >> C >> T;
        if (C == 'Y' and T >= 37)
            area[0]++;
        else if (C == 'N' and T >= 37)
            area[1]++;
        else if (C == 'Y')
            area[2]++;
        else 
            area[3]++;
    }

    for (int i = 0; i < 4; i++)
        cout << area[i] << " ";

    if (area[0] >= 2)
        cout << "E" << endl;

    return 0;
}