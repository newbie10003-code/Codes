#include<bits/stdc++.h>
using namespace std;

int islandCount(vector<vector<int>>& grid)
{
    int m = grid.size();
    int n = grid[0].size();
    queue<pair<int, int>> q;

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; i < n; j++)
        {
            if(grid[i][j] == 1)
                q.push({i, j});
        }
    }

    int i, j, ans = 0;
    while(!q.empty())
    {
        i = q.front().first;
        j = q.front().second;
        q.pop();
        
        int count = 0;

        if(isSafe(i + 1, j) and grid[i + 1][j] == 0)
            count++;
    }
}

int main()
{
    
    return 0;
}