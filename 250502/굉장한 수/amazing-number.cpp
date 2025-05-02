#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if ((n % 2 == 1 and n % 3 == 0) or (n % 2 == 0 and n % 5 == 0))
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}