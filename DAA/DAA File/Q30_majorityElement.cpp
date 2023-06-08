#include<bits/stdc++.h>
using namespace std;

void median(vector<int> &arr, int n)
{
    int med;
    if (n % 2 == 0)
    {
        med = ((arr[n - 1] / 2) + (arr[n - 2] / 2)) / 2;
    }
    else
    {
        med = arr[n - 1] / 2;
    }
    cout << med << endl;
}


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
    sort(nums.begin(), nums.end());
    cout << majorityElement(nums) << endl;
    median(nums, n);
    return 0;
}