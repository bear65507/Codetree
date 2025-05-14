#include <iostream>
using namespace std;

int main() {
    int attend;
    while(cin >> attend)
    {
        if (attend > 4)
        {
            cout << "Vacancy" << endl;
            break;
        }
        switch(attend)
        {
        case 1:
            cout << "John" << endl;
            break;
        case 2:
            cout << "Tom" << endl;
            break;
        case 3:
            cout << "Paul" << endl;
            break;
        case 4:
            cout << "Sam" << endl;
            break;
        default:
            break;
        }
    }
    return 0;
}