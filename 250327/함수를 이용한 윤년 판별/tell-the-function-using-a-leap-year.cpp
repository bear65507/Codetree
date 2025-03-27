#include <iostream>
using namespace std;

int y;

bool IsFeb29(int y)
{
    if (y % 100 == 0 and y % 400 != 0)
        return false;
    if (y % 4 != 0)
        return false;
    return true;
}

int main() {
    cin >> y;

    if (IsFeb29(y))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}