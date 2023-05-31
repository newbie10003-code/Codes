#include<bits/stdc++.h>
using namespace std;

void dfs(unordered_map<int, list<int>>& adjList, unordered_map<int, bool>& visited, int node, vector<int>& ans)
{
    ans.push_back(node);
    visited[node] = true;
    for (auto nbr : adjList[node])
    {
        if (!visited[nbr])
        {
            dfs(adjList, visited, nbr, ans);
        }
    }
}

int main()
{
    int vertices, edges, u, v;
    unordered_map<int, list<int>> adjList;
    unordered_map<int, bool> visited;
    vector<int> ans;
    
    cin >> vertices >> edges;
    
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    for (int i = 0; i < vertices; i++)
    {
        if (!visited[i])
        {
            dfs(adjList, visited, i, ans);
        }
    }
    
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}