#include <iostream>
#include <algorithm>
using namespace std;

int N;
int nums[1000];

int main() {
    int max = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    sort(nums, nums + N, greater<int>());
    bool isDup = false;
    for (int i = 0; i < N; i++)
    {
        isDup = false;
        for (int j = i + 1; j < N; j++)
        {
            if (nums[i] == nums[j])
            {
                isDup = true;
                break;
            }
        }
        for (int k = i - 1; k >= 0; k--)
        {
            if (nums[i] == nums[k])
            {
                isDup = true;
                break;
            }
        }
        if (!isDup)
        {
            max = (max > nums[i] ? max : nums[i]);
            break;
        }
    }

    if (!isDup)
        cout << max << endl;
    else
        cout << -1 << endl;

    return 0;
}
