#include <iostream>
using namespace std;

int main() {
    int length, area;
    cin >> length;

    area = length * length;
    cout << area << endl;
    cout << (length < 5 ? "tiny" : "") << endl;
    return 0;
}