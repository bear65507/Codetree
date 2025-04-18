#include <iostream>
using namespace std;

void Swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 3, b = 5;
    Swap(&a, &b);

    cout << a << endl << b << endl;
    return 0;
}