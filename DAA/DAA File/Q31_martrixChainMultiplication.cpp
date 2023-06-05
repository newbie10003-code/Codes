#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> p, int i, int j)
{
    if (i == j)
    {
        return 0;
    }
    int k;
    int mini = INT_MAX;
    int count;
    for (int k = i; k < j; k++)
    {
        count = solve(p, i, k) + solve(p, k + 1, j) + (p[i - 1] * p[k] * p[j]);

        if (count < mini)
        {
            mini = count;
        }
    }
    return mini;
}

int solveTab(vector<int>& p, int n)
{
    vector<vector<int>> m(n, vector<int>(n));

    int i, j, k, l, q;
    for (int i = 1; i < n; i++)
    {
        m[i][i] = 0;
    }
    
    for (int l = 2; l < n; l++)
    {
        for (int i = 1; i < n - l + 1; i++)
        {
            j = i + l - 1;
            m[i][j] = INT_MAX;
            for (int k = i; k < j; k++)
            {
                q = m[i][k] + m[k + 1][j] + (p[i - 1] * p[k] * p[j]);
                if (q < m[i][j])
                    m[i][j] = q;
            }
        }
    }
    return m[1][n - 1];
}

int main()
{
    int n;
    cin >> n;
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        s.insert(u);
        s.insert(v);
    }
    
    vector<int> arr;
    for (auto i : s)
    {
        arr.push_back(i);
    }
    
    cout << solve(arr, 1, arr.size() - 1) << endl;

    cout << solveTab(arr, arr.size()) << endl;

    return 0;
}