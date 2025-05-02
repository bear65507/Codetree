#include <iostream>
using namespace std;

int main() {
    int a_math, a_eng, b_math, b_eng;
    cin >> a_math >> a_eng;
    cin >> b_math >> b_eng;

    if (a_math >= b_math)
    {
        if (a_math == b_math and b_eng > a_eng)
            cout << "B" << endl;
        else
            cout << "A" << endl;
    }
    else
        cout << "B" << endl;

    return 0;
}