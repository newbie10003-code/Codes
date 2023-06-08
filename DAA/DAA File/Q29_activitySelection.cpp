
#include <bits/stdc++.h>
using namespace std;

void maxProfit(vector<pair<int, int>> &jobs, int n)
{
    int profit = 0;
    sort(jobs.begin(), jobs.end(), greater<>());
    int max = 0;
    for (auto i : jobs)
    {
        if (i.second > max)
            max = i.second;
    }

    int fill[max];
    for (int i = 0; i < max; i++)
    {
        fill[i] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        int j = jobs[i].second - 1;

        while (j >= 0 && fill[j] != -1)
        {
            j--;
        }
        if (j >= 0 && fill[j] == -1)
        {
            fill[j] = i;
            profit += jobs[i].first;
        }
    }
    cout << "Profit = " << profit << endl;
}
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> jobs;
    int profit, deadline;
    for (int i = 0; i < n; i++)
    {
        cin >> profit >> deadline;
        jobs.push_back(make_pair(profit, deadline));
    }
    maxProfit(jobs, n);
}
