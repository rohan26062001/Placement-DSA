#include <bits/stdc++.h>

using namespace std;

int search(vector<int> &nums, int target)
{
    int low = 0, high = nums.size() - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (nums[mid] == target)
            return mid;

        if (nums[low] <= nums[mid])
        {
            if (nums[low] <= target && target <= nums[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (nums[mid] <= target && target <= nums[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int target;
        cin >> target;
        if (search(v, target))
            cout << "true" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}