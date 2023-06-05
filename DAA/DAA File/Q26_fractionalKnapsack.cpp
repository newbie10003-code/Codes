#include<bits/stdc++.h>
using namespace std;

float fractionalKnapsack(vector<vector<float>>& nums, int capacity)
{
    float maxValue = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        float wt = nums[i][2];
        float val = nums[i][1];
        float valByWeight = nums[i][0];
        if (wt <= capacity)
        {
            capacity -= wt;
            maxValue += val;
        }
        else
        {
            maxValue += capacity * valByWeight;
            capacity = 0;
            break;
        }
        if (capacity == 0)
        {
            return maxValue;
        }
    }
    return maxValue;
}

int main()
{
    float n, weight, value; cin >> n;
    vector<vector<float>> nums(n, vector<float>(3, 0));

    for (int i = 0; i < n; i++)
    {
        cin >> weight >> value;
        nums[i][1] = value;
        nums[i][2] = weight;
        nums[i][0] = value / weight;
    }

    sort(nums.begin(), nums.end(), greater<>());

    int capacity; cin >> capacity;
    cout << fractionalKnapsack(nums, capacity);
    
    return 0;
}