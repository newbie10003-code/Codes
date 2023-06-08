#include<bits/stdc++.h>
using namespace std;

int _01Knapsack(vector<int>& weights, vector<int>& value, int n, int wt)
{
    if (n == 0)
    {
        if (weights[n] <= wt)
            return value[n];
        else    
            return 0;
    }

    if (wt <= 0)
        return 0;
    
    int incl = 0;
    if (weights[n] <= wt)
    {
        incl = _01Knapsack(weights, value, n - 1, wt - weights[n]) + value[n];
    }
    int excl = _01Knapsack(weights, value, n - 1, wt) + 0;

    return max(incl, excl);
}

int _01KnapsackMem(vector<int>& weights, vector<int>& value, int n, int wt, vector<vector<int>>& dp)
{
    if (n == 0)
    {
        if (weights[n] <= wt)
            return value[n];
        else    
            return 0;
    }

    if (wt <= 0)
        return 0;

    if(dp[n][wt] != -1)
        return dp[n][wt];
    
    int incl = 0;
    if (weights[n] <= wt)
    {
        incl = _01Knapsack(weights, value, n - 1, wt - weights[n]) + value[n];
    }
    int excl = _01Knapsack(weights, value, n - 1, wt) + 0;

    return dp[n][wt] = max(incl, excl);
}

int main()
{
    int n, w; cin >> n;
    vector<int> weights(n);
    vector<int> value(n);

    for (int i = 0; i < n; i++)
    {
        cin >> weights[i] >> value[i];
    }

    cin >> w;
    
    // cout << _01Knapsack(weights, value, n - 1, w) << endl; 

    vector<vector<int>> dp(n, vector<int>(w + 1, -1));
    cout << _01KnapsackMem(weights, value, n - 1, w, dp) << endl;

    return 0;
}