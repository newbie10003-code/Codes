#include<bits/stdc++.h>
#define MOD 10 e 9 + 7
using namespace std;

bool solve(vector<int>& nums, int k)
{
    if (k > nums.size())
    {
        return false;
    }
    
    vector<bool> count(*max_element(nums.begin(), nums.end()) + 1, false);
    for (int i = 0; i < k; i++)
    {
        if (count[nums[i]] == true)
        {
            return true;
        }
        count[nums[i]] = true;
    }
    
    for (int i = k; i < nums.size(); i++)
    {
        count[nums[i - k]] = false;
        if (count[nums[i]] == true)
        {
            return true;
        }
        count[nums[i]] = true;
    }
    return false;
}

int main()
{
    int n, k;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cin >> k;

    cout << solve(nums, k) << endl;

    return 0;
}