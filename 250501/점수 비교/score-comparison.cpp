#include <iostream>
using namespace std;

int main() {
    int a_math, a_eng, b_math, b_eng;
    cin >> a_math >> a_eng;
    cin >> b_math >> b_eng;

    if (a_math > b_math and a_eng > b_eng)
        cout << "1" << endl;
    else
        cout << "0" << endl;
        
    return 0;
}