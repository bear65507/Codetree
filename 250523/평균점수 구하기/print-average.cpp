#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double score, mean = 0.0;

    for (int i = 0; i < 8; i++)
    {
        cin >> score;
        mean += score;
    }
    mean /= 8;
    cout << fixed << setprecision(1);
    cout << mean << endl;
    return 0;
}