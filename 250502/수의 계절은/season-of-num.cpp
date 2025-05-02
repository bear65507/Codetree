#include <iostream>
using namespace std;

int main() {
    int season;
    cin >> season;

    if (season >= 3 and season < 6)
        cout << "Spring" << endl;
    else if (season >= 6 and season < 9)
        cout << "Summer" << endl;
    else if (season >= 9 and season < 12)
        cout << "Fall" << endl;
    else
        cout << "Winter" << endl;
    return 0;
}