#include<bits/stdc++.h>
using namespace std;

void bellmanFord(vector<vector<int>>& edges, int node, vector<int>& dist, int vertices)
{
    dist[node] = 0;
    for (int i = 0; i < vertices - 1; i++)
    {
        for (int j = 0; j < edges.size(); j++)
        {
            int u = edges[j][0], v = edges[j][1], w = edges[j][2];
            if (dist[u] != INT_MAX && dist[u] + w < dist[v])
            {
                dist[v] = w + dist[u];
            }
        }
    }
}

int main()
{
    int vertices, e, u, v, w;
    cin >> vertices >> e;
    
    vector<vector<int>> edges(e);
    vector<int> dist(vertices, INT_MAX);
    
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        edges[i].push_back(u);
        edges[i].push_back(v);
        edges[i].push_back(w);
    }

    bellmanFord(edges, 0, dist, vertices);

    for (int i = 0; i < dist.size(); i++)
    {
        cout << dist[i] << " ";
    }
    cout << endl;

    return 0;
}