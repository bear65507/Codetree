#include <iostream>
#include <string>

using namespace std;

string product_name;
int product_code;

class RedeemCode
{
public:
    RedeemCode(string name = "codetree", int code = 50)
    {
        this->_name = name;
        this->_code = code;
    }
    void PrintInfo()
    {
        cout << "product " << _code << " is " << _name << endl;
    }
public:
    string _name;
    int _code;
};

int main() {
    cin >> product_name >> product_code;

    RedeemCode* rc1 = new RedeemCode();
    RedeemCode* rc2 = new RedeemCode(product_name, product_code);

    rc1->PrintInfo();
    rc2->PrintInfo();

    delete rc1, rc2;

    return 0;
}