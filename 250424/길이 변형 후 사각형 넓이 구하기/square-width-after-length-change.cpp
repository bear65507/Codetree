#include <iostream>
using namespace std;

int main() {
    int width, height;
    cin >> width >> height;

    width += 8;
    height *= 3;

    cout << width << endl << height << endl << width * height << endl;

    return 0;
}