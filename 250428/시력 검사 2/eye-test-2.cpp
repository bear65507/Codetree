#include <iostream>
using namespace std;

int main() {
    double eye;
    cin >> eye;

    if (eye >= 1.0)
        cout << "High" << endl;
    
    else if (eye >= 0.5)
        cout << "Middle" << endl;
    
    else
        cout << "Low" << endl;
    
    return 0;
}