#include <iostream>
using namespace std;

int main() {
    int age1, age2;
    char sex1, sex2;

    cin >> age1 >> sex1;
    cin >> age2 >> sex2;

    if ((age1 >= 19 and sex1 == 'M') or (age2 >= 19 and sex2 == 'M'))
        cout << "1" << endl;
    else
        cout << "0" << endl;
    return 0;
}