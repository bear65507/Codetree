#include <iostream>
using namespace std;

int main() {
    int width, height;
    char c;
    while (cin >> width >> height >> c)
    {        
        cout << width * height << endl;
        
        if (c == 'C')
            break;
    }
    return 0;
}