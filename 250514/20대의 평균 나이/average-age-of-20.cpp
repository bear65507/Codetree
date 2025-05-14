#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int age, cnt = 0;
    double mean = 0;

    while(cin >> age)
    {
        if (age / 10 == 2)
        {
            mean += age;
            cnt++;
        }
        else
            break;
    }

    mean = static_cast<double>(mean) / cnt;
    cout << fixed << setprecision(2);
    cout << mean << endl;
    return 0;
}