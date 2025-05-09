#include <iostream>
using namespace std;

void Score(int n)
{
    switch (n / 10)
    {
    case 10:
    case 9:
        cout << "A "; 
        break;
    case 8:
        cout << "B ";
        break;
    case 7:
        cout << "C ";
        break;
    case 6:
        cout << "D ";
        break;
    default:
        cout << "F ";
        break;
    }
}

int main() {
    int n;
    cin >> n;

    for (int i = n; i <= 100; i++)
    {
        Score(i);
    }

    return 0;
}