#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& nums, int start, int end, int key)
{
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == key)
        {
            return mid;
        }
        else if (key < nums[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 2, 2, 2, 3, 4, 5};
    int key = 2;
    int target = binarySearch(nums, 0, nums.size() - 1, key);
    int count = 0;
    if (target == -1)
    {
        return 0;
    }
    for (int i = target; i < nums.size(); i++)
    {
        if (nums[i] != key)
        {
            break;
        }
        count++;
    }
    for (int i = target; i >= 0; i--)
    {
        if (nums[i] != key)
        {
            break;
        }
        count++;
    }
    cout << count - 1 << endl;
    return 0;
}