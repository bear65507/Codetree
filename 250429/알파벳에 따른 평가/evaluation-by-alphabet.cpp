#include <iostream>
using namespace std;

int main() {
    char alpha;
    cin >> alpha;

    switch(alpha)
    {
    case 'S':
        cout << "Superior" << endl;
        break;
    case 'A':
        cout << "Excellent" << endl;
        break;
    case 'B':
        cout << "Good" << endl;
        break;
    case 'C':
        cout << "Usually" << endl;
        break;
    case 'D':
        cout << "Effort" << endl;
        break;
    default:
        cout << "Failure" << endl;
        break;
    }
    return 0;
}