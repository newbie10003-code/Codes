// Diff of any 2 elements should be equal to given k
#include<bits/stdc++.h>
using namespace std;

void twoDiff(vector<int>& v, vector<pair<int, int>>& ans, int k)
{
    sort(v.begin(), v.end(), [&](auto a, auto b)
    {
        return abs(a - b);
    });
    for(auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    // vector<int> v = {1, 5, 84, 209, 341};
    vector<int> v = {24, 28, 48, 71, 86, 89, 92, 120, 194, 201};
    vector<pair<int, int>> ans;
    int k; cin >> k;
    twoDiff(v, ans, k);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << "A[i]: " << ans[i].first << ", A[j]: " << ans[i].second << endl;
    // }
    cout << endl;
    return 0;
}