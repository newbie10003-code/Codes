#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b)
{
    return a.first > b.first;
}

int find(vector<int>& parent, int node)
{
    if(parent[node] == -1)
        return node;
    return parent[node] = find(parent, parent[node]);
}

void rankByUnion(vector<int>& parent, vector<int>& rank, int u, int v)
{
    u = find(parent, u);
    v = find(parent, v);
    if (rank[u] < rank[v])
    {
        parent[u] = v;
    }
    else if (rank[u] > rank[v])
    {
        parent[v] = u;
    }
    else
    {
        parent[v] = u;
        rank[u]++;
    }
}

int kruskalAlgo(vector<pair<int, pair<int, int>>>& edges, int e, int totalWeight, vector<int>& rank, vector<int>& parent)
{
    for (auto edge : edges)
    {
        int u = find(parent, edge.second.first);
        int v = find(parent, edge.second.second);
        if(u != v)
        {
            rankByUnion(parent, rank, edge.second.first, edge.second.second);
            totalWeight += edge.first;
        }
    }
    return totalWeight;
}

int main()
{
    int vertices, e, u, v, w;
    vector<pair<int, pair<int, int>>> edges;
    
    cin >> vertices >> e;
    vector<int> parent(vertices, -1);
    vector<int> rank(vertices, 0);
    
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        edges.push_back({w, {u, v}});
    }

    sort(edges.begin(), edges.end(), compare);

    int ans = kruskalAlgo(edges, e, 0, rank, parent);
    cout << ans << endl;
     
    return 0;
}