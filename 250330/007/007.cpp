#include <iostream>
#include <string>

using namespace std;

string secret_code;
char meeting_point;
string c_time;

class PrintCode
{
public:
    PrintCode(string secret_code, char meeting_point, string time)
    {
        this->_secret_code = secret_code;
        this->_meeting_point = meeting_point;
        this->_c_time = time;
    }
public:
    string _secret_code;
    char _meeting_point;
    string _c_time;
};

int main() {
    cin >> secret_code >> meeting_point >> c_time;

    PrintCode pc = PrintCode(secret_code, meeting_point, c_time);

    cout << "secret code : " << pc._secret_code << endl;
    cout << "meeting point : " << pc._meeting_point << endl;
    cout << "time : " << pc._c_time << endl;

    return 0;
}