#include <iostream>
using namespace std;

int main() {
    int score;
    cin >> score;

    if (score >= 80)
        cout << "pass" << endl;
    else
        cout << 80 - score << " more score" << endl;

    return 0;
}