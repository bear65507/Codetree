#include <iostream>
using namespace std;

int main() {
    int input;
    while (cin >> input)
    {
        if (input == 25)
        {
            cout << "Good" << endl;
            break;
        }
        if (input > 25)
            cout << "Lower" << endl;
        else if (input < 25)
            cout << "Higher" << endl;
    }

    return 0;
}