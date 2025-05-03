#include <iostream>
using namespace std;

int main() {
    int sex, age;
    cin >> sex;
    cin >> age;

    if (age >= 19)
    {
        if (sex == 0)
            cout << "MAN" << endl;
        else if (sex == 1)
            cout << "WOMAN" << endl;
    }
    else
    {
        if (sex == 0)
            cout << "BOY" << endl;
        else if (sex == 1)
            cout << "GIRL" << endl;
    }

    return 0;
}