#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int n;
int arr[100000];


void RadixSort(int arr[])
{
    for (int pos = 0; pos < 5; pos++)
    {
        vector<vector<int>> arr_new(10, vector<int>());
        for (int i = 0; i < n; i++)
        {
            int digit = (int)(arr[i] / pow(10, pos)) % 10;
            arr_new[digit].push_back(arr[i]);
        }

        vector<int> store_arr;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < arr_new[i].size(); j++)
            {
                store_arr.push_back(arr_new[i][j]);
            }
        }

        for (int i = 0; i < n; i++)
        {
            arr[i] = store_arr[i];
        }
    }
}


int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    RadixSort(arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
