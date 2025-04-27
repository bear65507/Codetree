#include <iostream>
using namespace std;

int main() {
    int height, weight;
    cin >> height >> weight;

    int bmi = (10000 * weight) / (height * height);
    cout << bmi << endl;
    cout << (bmi >= 25 ? "Obesity" : "") << endl;

    return 0;
}