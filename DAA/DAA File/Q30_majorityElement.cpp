#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums)
{
    unordered_map<int, int> count;
    for (int i = 0; i < nums.size(); i++)
    {
        count[nums[i]]++;
    }
    for (auto i : count)
    {
        if (i.second >= nums.size() / 2)
        {
            return i.first;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << majorityElement(nums) << endl;
    return 0;
}