#include<bits/stdc++.h>
using namespace std;

int jobSelection(vector<vector<int>>& jobs, vector<int>& jobSelected)
{
    jobSelected.push_back(1);
    int ans = 1, endTime = jobs[0][0];
    // cout << "Hello" << endl;
    for (int i = 0; i < jobs.size(); i++)
    {
        int start = jobs[i][1];
        // cout << start << " ";
        if(start >= endTime)
        {
            ans++;
            jobSelected.push_back(i + 1);
            endTime = jobs[i][0];
        }
    }
    cout << endl;
    return ans;
}

int main()
{
    int n, start, end; cin >> n;
    vector<vector<int>> jobs(n);
    for (int i = 0; i < n; i++)
    {
        cin >> start >> end;
        jobs[i].push_back(end);
        jobs[i].push_back(start);
    }
    sort(jobs.begin(), jobs.end());
    vector<int> ans;
    // cout << "Hi" << endl;
    cout << jobSelection(jobs, ans) << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}