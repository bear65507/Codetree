#include <iostream>
#include <string>

using namespace std;

string user2_id;
int user2_level;

class User
{
public:
    User(string id = "codetree", int level = 10)
    {
        this->_id = id;
        this->_level = level;
    }
public:
    string _id;
    int _level;
};

int main() {
    cin >> user2_id >> user2_level;

    User u1 = User();
    User u2 = User(user2_id, user2_level);

    cout << "user " << u1._id << " lv " << u1._level << endl;
    cout << "user " << u2._id << " lv " << u2._level << endl;

    return 0;
}