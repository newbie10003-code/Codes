#include<bits/stdc++.h>
using namespace std;

int activitySelection(vector<vector<int>>& activities, vector<int>& jobSelected)
{
    jobSelected.push_back(1);
    int ans = 1, endTime = activities[0][0];
    for (int i = 0; i < activities.size(); i++)
    {
        int start = activities[i][1];
        if(start >= endTime)
        {
            ans++;
            jobSelected.push_back(i + 1);
            endTime = activities[i][0];
        }
    }
    cout << endl;
    return ans;
}

int main()
{
    int n, start, end; cin >> n;
    vector<vector<int>> activities(n);
    for (int i = 0; i < n; i++)
    {
        cin >> start >> end;
        activities[i].push_back(end);
        activities[i].push_back(start);
    }
    sort(activities.begin(), activities.end());
    vector<int> ans;
    cout << activitySelection(activities, ans) << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}