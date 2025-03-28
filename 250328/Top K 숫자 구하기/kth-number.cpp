#include <iostream>
#include <algorithm>
using namespace std;

int N, k;
int nums[1000];

int FindTopK(int k)
{
    sort(nums, nums + N);
    return nums[k - 1];
}

int main() {
    cin >> N >> k;

    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    cout << FindTopK(k) << endl;

    return 0;
}
