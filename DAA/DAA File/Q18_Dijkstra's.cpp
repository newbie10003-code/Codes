#include<bits/stdc++.h>
using namespace std;

void dijkstraAlgo(unordered_map<int, list<pair<int, int>>>& adjList, int src, vector<int>& dist)
{
    dist[src] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({0, 0});
    while (!q.empty())
    {
        pair<int, int> top = q.top();
        q.pop();
        for(auto nbr : adjList[top.second])
        {
            if (dist[nbr.first] > dist[top.second] + nbr.second)
            {
                dist[nbr.first] = dist[top.second] + nbr.second;
                q.push({dist[nbr.first], nbr.first});
            }
        }
    }
}

int main()
{
    int vertices, edges, u, v, w;
    unordered_map<int, list<pair<int, int>>> adjList;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    vector<int> dist(vertices, INT_MAX);
    
    cin >> vertices >> edges;
    
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v >> w;
        adjList[u].push_back({v, w});
        adjList[v].push_back({u, w});
    }

    dijkstraAlgo(adjList, 0, dist);
    
    for(int i = 0; i < vertices; i++)
    {
        cout << dist[i] << " ";
    }
    cout << endl;

    return 0;
}