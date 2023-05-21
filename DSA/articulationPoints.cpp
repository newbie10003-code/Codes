#include <bits/stdc++.h>
using namespace std;

void dfs(int node, int parent, vector<int> &disc, vector<int> &low, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj, vector<int> &ans, int &timer)
{
    visited[node] = true;
    disc[node] = low[node] = timer++;
    int child = 0;

    for (auto nbr : adj[node])
    {
        if (nbr == parent)
        {
            continue;
        }
        if (!visited[nbr])
        {
            dfs(nbr, node, disc, low, visited, adj, ans, timer);
            low[node] = min(low[node], low[nbr]);
            // Check for articulation point
            if (low[nbr] >= disc[node] && parent != -1)
            {
                ans.push_back(node);
            }
            child++;
        }
        // Back edge hai
        else
        {
            low[node] = min(low[node], disc[nbr]);
        }
    }
    if (child > 1 && parent == -1)
    {
        ans.push_back(node);
    }
}

int main()
{
    int n = 5, e = 5;
    unordered_map<int, list<int>> adjList;
    vector<pair<int, int>> edges;
    edges.push_back({0, 3});
    edges.push_back({3, 4});
    edges.push_back({0, 4});
    edges.push_back({0, 1});
    edges.push_back({1, 2});

    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    int timer = 0;
    int parent = -1;
    vector<int> disc(n, -1);
    vector<int> low(n, -1);
    unordered_map<int, bool> visited;
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            dfs(i, parent, disc, low, visited, adjList, ans, timer);
        }
    }

    cout << "Articulation points in the graph are" << endl;
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}