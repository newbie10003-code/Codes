#include<bits/stdc++.h>
using namespace std;

int kLargest(vector<int>& nums, int k)
{
    priority_queue<int> q;
    k -= 1;
    for (int i = 0; i < nums.size(); i++)
        q.push(nums[i]);
    while (!q.empty() and k--)
        q.pop();
    return q.top();
}

int main()
{
    int n, k; cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    cin >> k;

    cout << kLargest(nums, k) << endl;
    return 0;
}