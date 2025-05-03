#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<int> month_list{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month;
    cin >> month;

    cout << month_list[month - 1] << endl;
    return 0;
}