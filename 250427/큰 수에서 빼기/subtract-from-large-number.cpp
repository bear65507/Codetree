#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int res = (a > b ? a - b : b - a);
    cout << res << endl;
    
    return 0;
}