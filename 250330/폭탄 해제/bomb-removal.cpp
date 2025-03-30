#include <iostream>
#include <string>

using namespace std;

string unlock_code;
char wire_color;
int seconds;

class Deactivation
{
public:
    Deactivation(string code, char color, int sec)
    {
        this->_code = code;
        this->_color = color;
        this->_seconds = sec;
    }
    void PrintInfo()
    {
        cout << "code : " << _code << endl;
        cout << "color : " << _color << endl;
        cout << "second : " << _seconds << endl;
    }
public:
    string _code;
    char _color;
    int _seconds;
};

int main() {
    cin >> unlock_code >> wire_color >> seconds;

    Deactivation *da = new Deactivation(unlock_code, wire_color, seconds);
    da->PrintInfo();

    delete da;
    return 0;
}