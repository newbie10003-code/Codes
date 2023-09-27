#include<bits/stdc++.h>
using namespace std;

bool isSafe(int i, int j, int m, int n)
{
    if(i < 0 or i >= m or j < 0 or j >= n)
        return false;
    return true;
}

bool solve(vector<vector<char>>& grid, string word, vector<vector<bool>>& visited, int i, int j, int k)
{
    if(k == word.size())
        return true;

    cout << i << " " << j << " " << word[k] << endl;
    visited[i][j] = true;
    if(isSafe(i + 1, j, grid.size(), grid[0].size()) and k + 1 < word.size() and grid[i + 1][j] == word[k + 1] and !visited[i + 1][j])
    {
        bool ans = solve(grid, word, visited, i + 1, j, k + 1);
        if(ans)
            return true;
    }

    if(isSafe(i - 1, j, grid.size(), grid[0].size()) and k + 1 < word.size() and grid[i - 1][j] == word[k + 1] and !visited[i - 1][j])
    {
        bool ans = solve(grid, word, visited, i - 1, j, k + 1);
        if(ans)
            return true;
    }

    if(isSafe(i, j + 1, grid.size(), grid[0].size()) and k + 1 < word.size() and grid[i][j + 1] == word[k + 1] and !visited[i][j + 1])
    {
        bool ans = solve(grid, word, visited, i, j + 1, k + 1);
        if(ans)
            return true;
    }

    if(isSafe(i, j - 1, grid.size(), grid[0].size()) and k + 1 < word.size() and grid[i][j - 1] == word[k + 1] and !visited[i][j - 1])
    {
        bool ans = solve(grid, word, visited, i, j - 1, k + 1);
        if(ans)
            return true;
    }

    else
        return false;
    visited[i][j] = false;
}

bool wordGrid(vector<vector<char>>& grid, string word)
{
    int m = grid.size();
    int n = grid[0].size();
    queue<pair<int, int>> q;
    vector<vector<bool>> visited(m, vector<bool>(n, false));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == word[0])
                q.push({i, j});
        }
    }

    while (!q.empty())
    {
        int i = q.front().first, j = q.front().second;
        q.pop();

        bool ans = solve(grid, word, visited, i, j, 0);
        if(ans)
            return true;
    }
    return false;
}

int main()
{
    int m, n; cin >> m >> n;
    vector<vector<char>> grid(m, vector<char>(n));
    string word;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];
    }
    cin >> word;

    cout << wordGrid(grid, word) << endl;
    return 0;
}