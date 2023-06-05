#include<bits/stdc++.h>
using namespace std;

int activitySelection(vector<vector<int>>& activities)
{
    int ans = 1;
    int end = activities[0][0];
    for (int i = 0; i < activities.size(); i++)
    {
        int time = activities[i][1];
        int deadline = activities[i][0];
        if (end + time <= deadline)
        {
            end = deadline;
            ans++;
        }
    }
    return ans;
}

int main()
{
    int n, time, deadline; cin >> n;
    vector<vector<int>> activities(n);

    for (int i = 0; i < n; i++)
    {
        cin >> time >> deadline;
        activities[i].push_back(deadline);
        activities[i].push_back(time);
    }
    
    sort(activities.begin(), activities.end());

    cout << activitySelection(activities) << endl;

    return 0;
}