#include <iostream>
using namespace std;

bool IsYoon(int year)
{
    if(year % 4 == 0)
    {
        if(year % 100 == 0 and year % 400 != 0)
            return false;
        return true;
    }
    return false;
}

int main() {
    int y;
    cin >> y;

    cout << boolalpha << IsYoon(y);
    return 0;
}