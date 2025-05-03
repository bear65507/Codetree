#include <iostream>
using namespace std;

int main() {
    char isCold;
    int temper, emergency = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> isCold >> temper;

        if (isCold == 'Y' and temper >= 37)
            emergency++;
    }

    if (emergency >= 2)
        cout << "E" << endl;
    else
        cout << "N" << endl;


    return 0;
}