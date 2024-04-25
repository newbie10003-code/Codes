#include<bits/stdc++.h>
using namespace std;

int maxAns(int n, int m, vector<vector<int>> arr)
{
    for(auto it : arr)
    {
        
    }
}

int main()
{
    priority_queue<int> q;
    vector<vector<int>> arr;
    int n; cin >> n;
    int m; cin >> m;
    for (int i = 0; i < m; i++)
    {
        int di, vi;
        cin >> di >> vi;
        arr.push_back({di, vi});
    }
    
    sort(arr.begin(), arr.end());
    maxAns(n, arr.size(), arr);

    return 0;
}