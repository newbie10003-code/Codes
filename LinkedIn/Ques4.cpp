#include<bits/stdc++.h>
using namespace std;

void coinSum(vector<int>& coins, int amt, int i, vector<vector<int>>& ans, vector<int>& temp)
{
    if(i == coins.size() or amt < 0)
    {
        temp.clear();
        return;
    }
    
    if (amt == 0)
    {
        ans.push_back(temp);
        temp.clear();
        return;
    }
    
    if(coins[i] <= amt)
    {
        temp.push_back(coins[i]);
        coinSum(coins, amt - coins[i], i, ans, temp);
    }
    else
        coinSum(coins, amt, i + 1, ans, temp);
}

void coinSum2(vector<int>& coins, int amt, int i, vector<vector<int>>& ans, vector<int>& temp)
{
    if(i < 0 or amt < 0)
    {
        temp.clear();
        return;
    }
    
    if (amt == 0)
    {
        ans.push_back(temp);
        temp.clear();
        return;
    }
    
    if(coins[i] <= amt)
    {
        temp.push_back(coins[i]);
        coinSum2(coins, amt - coins[i], i, ans, temp);
    }
    else
    {
        coinSum2(coins, amt, i - 1, ans, temp);
    }
}

int main()
{
    int n, amt, answer = INT_MAX; cin >> n;
    vector<int> coins(n);
    vector<vector<int>> ans;
    vector<int> temp;
    for (int i = 0; i < n; i++)
        cin >> coins[i];
    cin >> amt;

    coinSum(coins, amt, 0, ans, temp);
    coinSum2(coins, amt, coins.size() - 1, ans, temp);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i].size() << " ";
        if(ans[i].size() < answer)
            answer = ans[i].size();
    }
    
    cout << answer << endl;
    return 0;
}