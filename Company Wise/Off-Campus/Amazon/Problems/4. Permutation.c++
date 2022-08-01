#include <bits/stdc++.h>

using namespace std;

void helper(vector<int> &nums, int begin, vector<vector<int>> &ans)
{
    if (begin >= nums.size())
    {
        ans.push_back(nums);
        return;
    }

    for (int i = begin; i < nums.size(); i++)
    {
        swap(nums[begin], nums[i]);
        helper(nums, begin + 1, ans);
        swap(nums[begin], nums[i]);
    }
}

vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    helper(nums, 0, ans);
    return ans;
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
        vector<vector<int>> ans = permute(v);
        cout << "Answer: " << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}