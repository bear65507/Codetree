#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    int N;
    double score, mean = 0;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> score;
        mean += score;
    }
    mean /= N;

    cout << fixed << setprecision(1);
    cout << mean << endl;
    switch (static_cast<int>(mean))
    {
    case 4:
        cout << "Perfect" << endl;
        break;
    case 3:
        cout << "Good" << endl;
        break;
    default:
        cout << "Poor" << endl;
        break;
    }
    return 0;
}