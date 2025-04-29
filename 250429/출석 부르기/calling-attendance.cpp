#include <iostream>
using namespace std;

int main() {
    int attend;
    cin >> attend;

    switch (attend)
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
    default:
        cout << "Vacancy" << endl;
        break;
    }
    return 0;
}