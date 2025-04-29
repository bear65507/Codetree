#include <iostream>
using namespace std;

int main() {
    int money;
    cin >> money;

    if (money >= 3000)
        cout << "book" << endl;
    else if (money >= 1000)
        cout << "mask" << endl;
    else if (money >= 500)
        cout << "pen" << endl;
    else
        cout << "no" << endl;    
    return 0;
}