#include<bits/stdc++.h>
using namespace std;

void dfs(unordered_map<int, list<int>>& adjList, int node, vector<int>& path, vector<bool>& visited)
{
    visited[node] = true;
    path.push_back(node);
    for(auto nbr : adjList[node])
    {
        if (!visited[nbr])  
        {
            dfs(adjList, nbr, path, visited);
        }
    }
}

int main()
{
    unordered_map<int, list<int>> adjList;
    int n, e;
    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
    }

    vector<bool> visited(n);
    vector<int> path;

    for (int i = 0; i < n; i++)
    {
        dfs(adjList, i, path, visited);
        if(path.size() == n)
        {
            cout << "Mother vertex: " << i << endl;
        }
        fill(visited.begin(), visited.end(), false);
        path.clear();
    }
    
    return 0;
}