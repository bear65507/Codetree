#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    bool IsCompositeNum = false;
    for (int i = 2; i < N; i++)
    {
        if (N % i == 0)
        {
            IsCompositeNum = true;
            break;
        }
    }

    if(IsCompositeNum)
        cout << "C" << endl;
    else
        cout << "N" << endl;
    
    return 0;
}