#include<bits/stdc++.h>
using namespace std;

void dfs(unordered_map<int, list<int>>& adjList, unordered_map<int, bool>& visited, vector<int>& ans, int src)
{
    visited[src] = true;
    ans.push_back(src);
    for(auto neighbour : adjList[src])
    {
        if (!visited[neighbour])
        {
            dfs(adjList, visited, ans, neighbour);
        }
        
    }
}

int main()
{
    int n, u, v;
    cin >> n;
    unordered_map<int, list<int>> adjList;
    unordered_map<int, bool> visited;
    
    // Adjacency List
    for (int i = 0; i < n; i++)
    {
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    
    vector<int> ans;
    for(int i = 0; i < n; i++)
    {
        if(!visited[i])
            dfs(adjList, visited, ans, i);
    }
    
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    

    return 0;
}