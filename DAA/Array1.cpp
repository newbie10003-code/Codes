// Find a[i] & a[j] such that a[i] + a[j] = a[k]
// Given: sorted array
#include<bits/stdc++.h>
using namespace std;

void twoSum(vector<int>& nums, vector<pair<pair<int, int>, int>>& ans)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            int sum = nums[i] + nums[j];
            if (binary_search(nums.begin(), nums.end(), sum) && i != j)
            {
                ans.push_back({{nums[i], nums[j]}, sum});
            }
        }   
    }
}

int main()
// 24, 28, 48, 71, 86, 89, 92, 120, 194, 201
{
    // vector<int> v = {1, 5, 84, 209, 341};
    // vector<int> v = {24, 28, 48, 71, 86, 89, 92, 120, 194, 201};
    vector<int> v = {64, 69, 82, 95, 99, 107, 113, 141, 171, 312, 369, 400, 511, 519, 666};
    vector<pair<pair<int, int>, int>> ans;
    twoSum(v, ans);
    cout << "Answer: " << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "A[i]: " << ans[i].first.first << ", A[j]: " << ans[i].first.second << ", A[k]: " << ans[i].second << endl;
    }
    return 0;
}