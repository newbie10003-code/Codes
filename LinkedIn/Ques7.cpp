#include<bits/stdc++.h>
using namespace std;

void targetSum(vector<int>& nums, int target, vector<int>& ans)
{
    unordered_map<int, int> index;
    for (int i = 0; i < nums.size(); i++)
        index[nums[i]] = i;
    
    sort(nums.begin(), nums.end());

    int i = 0, j = nums.size() - 1;
    while (i < j)
    {
        if(nums[i] + nums[j] < target)
            i++;
        else if(nums[i] + nums[j] > target)
            j--;
        else
        {
            ans.push_back(index[nums[i]]);
            ans.push_back(index[nums[j]]);
            return;
        }
    }
}

int main()
{
    int n, target; cin >> n;
    vector<int> nums(n), ans(2);
    for(int i = 0; i < n; i++)
        cin >> nums[i];
    cin >> target;

    targetSum(nums, target, ans);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}