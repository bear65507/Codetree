#include <iostream>
using namespace std;

int main() {
    int temp;
    cin >> temp;

    if(temp < 0)
        cout << "ice" << endl;

    else if(temp >= 0 and temp < 100)
        cout << "water" << endl;

    else if(temp >= 100)
        cout << "vapor" << endl;
        
    return 0;
}