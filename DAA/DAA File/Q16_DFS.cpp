#include<bits/stdc++.h>
using namespace std;

bool dfs(unordered_map<int, list<int>>& adjList, unordered_map<int, bool>& visited, int node, int dest)
{
    if(node == dest)
        return true;
    visited[node] = true;
    for (auto nbr : adjList[node])
    {
        if (!visited[nbr])
        {
            dfs(adjList, visited, nbr, dest);
        }
    }
    return false;
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

    int src, dest;
    cin >> src >> dest;
    cout << dfs(adjList, visited, src, dest) << endl;
    return 0;
}