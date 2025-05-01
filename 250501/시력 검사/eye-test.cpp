#include <iostream>
using namespace std;

int main() {
    double lefteye, righteye;
    cin >> lefteye >> righteye;

    if (lefteye >= 1.0 and righteye >= 1.0)
        cout << "High" << endl;

    else if(lefteye >= 0.5 and righteye >= 0.5)
        cout << "Middle" << endl;
        
    else
        cout << "Low" << endl;
    return 0;
}