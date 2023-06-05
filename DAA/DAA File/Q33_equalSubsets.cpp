#include<bits/stdc++.h>
using namespace std;

bool subsetSum(vector<int>& nums, int n, int target)
{
    if (target < 0 or n >= nums.size())
    {
        return false;
    }

    if (target == 0)
    {
        return true;
    }
    
    return subsetSum(nums, n + 1, target - nums[n]) or subsetSum(nums, n + 1, target - 0);
}

bool subsetSumMem(vector<int>& nums, int n, int target, vector<vector<int>>& dp)
{
    if (target < 0 or n >= nums.size())
    {
        return false;
    }

    if (target == 0)
    {
        return true;
    }
    
    if(dp[n][target] != -1)
        return dp[n][target];
    
    return dp[n][target] = subsetSumMem(nums, n + 1, target - nums[n], dp) or subsetSumMem(nums, n + 1, target - 0, dp);
}

bool subsetSumTab(vector<int>& nums, int target)
{
    vector<vector<int>> dp(nums.size() + 1, vector<int>(target + 1, 0));
    for (int i = 0; i <= nums.size(); i++)
    {
        dp[i][0] = 1;
    }

    for (int i = nums.size() - 1; i >= 0; i--)
    {
        for (int j = 0; j <= target; j++)
        {
            bool incl = 0;
            if(j - nums[i] >= 0)
                incl = dp[i + 1][j - nums[i]];
            bool excl = dp[i + 1][j];
            dp[i][j] = incl or excl;
        }
    }
    return dp[0][target];
}

int main()
{
    int n, sum = 0, target; cin >> n;
    bool ans = false;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        sum += nums[i];
    }
    
    if(sum % 2 == 1)
        cout << 0 << endl;
    
    else
    {
        target = sum / 2;

        bool ans1 = subsetSum(nums, 0, target);

        // vector<vector<int>> dp(n, vector<int>(target + 1, -1));
        // bool ans2 = subsetSumMem(nums, 0, target, dp);
        // cout << ans1 << endl;

        bool ans3 = subsetSumTab(nums, target);
        cout << ans3 << endl;
    }

    return 0;
}