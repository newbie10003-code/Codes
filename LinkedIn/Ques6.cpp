#include<bits/stdc++.h>
using namespace std;

void mergeIntervals(vector<vector<int>>& intervals, vector<vector<int>>& ans)
{
    ans.push_back({intervals[0][0], intervals[0][1]});
    int j = 0;
    for (int i = 1; i < intervals.size(); i++)
    {
        int endOne = ans[j][1];
        int startOne = ans[j][0];
        int startTwo = intervals[i][0];
        int endTwo = intervals[i][1];

        if(startTwo <= endOne)
        {
            ans.erase(ans.begin() + j);
            ans.push_back({startOne, endTwo});
        }
        else
        {
            ans.push_back({startTwo, endTwo});
            j++;
        }
    }
}

int main()
{
    int n, j, k; cin >> n;
    vector<vector<int>> intervals;
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++)
    {
        cin >> j >> k;
        intervals.push_back({j, k});
    }
    sort(intervals.begin(), intervals.end());

    mergeIntervals(intervals, ans);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i][0] << " " << ans[i][1] << endl;
    

    return 0;
}