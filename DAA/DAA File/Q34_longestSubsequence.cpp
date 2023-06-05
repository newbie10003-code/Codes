#include<bits/stdc++.h>
using namespace std;

int lcs(string& s1, string& s2, int m, int n)
{
    if (m == 0 or n == 0)
    {
        return 0;
    }
    
    if (s2[n - 1] == s1[m - 1])
    {
        return lcs(s1, s2, m - 1, n - 1) + 1;
    }

    return max(lcs(s1, s2, m, n - 1), lcs(s1, s2, m - 1, n));
}

int lcsMem(string& s1, string& s2, int m, int n, vector<vector<int>>& dp)
{
    if (m == 0 or n == 0)
    {
        return 0;
    }
    
    if (s2[n - 1] == s1[m - 1])
    {
        return lcs(s1, s2, m - 1, n - 1) + 1;
    }

    if (dp[m][n] != -1)
    {
        return dp[m][n];
    }

    dp[m][n] = max(lcsMem(s1, s2, m, n - 1, dp), lcsMem(s1, s2, m - 1, n, dp));
    return dp[m][n];
}

int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int m = s1.size(), n = s2.size();
    // cout << lcs(s1, s2, s1.size(), s2.size()) << endl;

    vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
    cout << lcsMem(s1, s2, m, n, dp) << endl;
    return 0;
}