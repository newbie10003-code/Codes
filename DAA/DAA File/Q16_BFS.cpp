#include<bits/stdc++.h>
using namespace std;

void bfs(unordered_map<int, list<int>>& adjList, unordered_map<int, bool>& visited, int node, vector<int>& ans)
{
    queue<int> q;
    q.push(node);
    visited[node] = true;
    while (!q.empty())
    {
        int frontNode = q.front();
        q.pop();
        ans.push_back(frontNode);
        visited[frontNode] = true;
        for (auto nbr : adjList[frontNode])
        {
            if (!visited[nbr])
            {
                q.push(nbr);
                visited[nbr] = true;
            }
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
            bfs(adjList, visited, i, ans);
        }
    }
    
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}