#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums, int index, int sum)
{
    if (sum == 0)
    {
        return 1;
    }

    if ((index <= 0 && sum > 0) || sum < 0)
    {
        return 0;
    }

    return solve(nums, index, sum - nums[index - 1]) + solve(nums, index - 1, sum);
}

int solveTab(vector<int>& nums, int sum)
{
    vector<vector<int>> table(sum + 1, vector<int>(nums.size()));
    for (int i = 0; i < nums.size(); i++)
    {
        table[0][i] = 1;
    }
    
    for (int i = 1; i <= sum; i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            int include = 0;
            if(i >= nums[j])
            {
                include = table[i - nums[j]][j];
            }
            int exclude = 0;
            if (j > 0)
            {
                exclude = table[i][j - 1];
            }
            table[i][j] = include + exclude;
        }
    }
    return table[sum][nums.size() - 1];
}

int main()
{
    int n, count = 0, sum, index = 0;
    cin >> n;
    vector<int> nums(n);
    vector<int> dp(n, -1);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cin >> sum;

    // cout << solve(nums, n, sum) << endl;

    cout << solveTab(nums, sum) << endl;

    return 0;
}