#include<bits/stdc++.h>
using namespace std;

void primsAlgo(unordered_map<int, list<pair<int, int>>>& adjList, unordered_map<int, bool>& visited, int vertices, vector<int>& parent, vector<int>& dist)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({0, 0});
    dist[0] = 0;
    parent[0] = -1;
    visited[0] = true;
    while (!q.empty())      
    {
        int src = q.top().second;
        q.pop();
        for (auto nbr : adjList[src])
        {
            int wt = nbr.second;
            int dest = nbr.first;
            if (!visited[dest] && dist[dest] > wt)
            {
                dist[dest] = wt;
                parent[dest] = src;
                q.push({wt, dest});
            }
        }
        visited[src] = true;
    }
}


int main()
{
    int vertices, edges, u, v, w;
    unordered_map<int, list<pair<int, int>>> adjList;
    unordered_map<int, bool> visited;
    
    cin >> vertices >> edges;
    vector<int> dist(vertices, INT_MAX);
    vector<int> parent(vertices);
    
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v >> w;
        adjList[u].push_back({v, w});
        adjList[v].push_back({u, w});
    }

    primsAlgo(adjList, visited, vertices, parent, dist);

    int sum = 0;
    for (int i = 0; i < dist.size(); i++)
    {
        cout << dist[i] << " ";
        sum += dist[i];
    }
    cout << endl << sum << endl;

    return 0;
}