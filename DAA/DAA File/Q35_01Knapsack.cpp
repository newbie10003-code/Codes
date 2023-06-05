#include<bits/stdc++.h>
using namespace std;

int _01Knapsack(vector<int>& weights, vector<int>& value, int n, int wt)
{
    if (weights.size() == 0)
        return 0;

    if (n == 0)
    {
        if(weights[n] <= wt)
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

int main()
{
    int n, w; cin >> n;
    vector<int> weights;
    vector<int> value;

    for (int i = 0; i < n; i++)
    {
        cin >> weights[i] >> value[i];
    }

    cin >> w;
    
    cout << _01Knapsack(weights, value, n - 1, w) << endl; 

    return 0;
}