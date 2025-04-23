#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s;
    cin >> t;

    string temp = s;
    s = t;
    t = temp;

    cout << s << endl << t << endl;
    return 0;
}