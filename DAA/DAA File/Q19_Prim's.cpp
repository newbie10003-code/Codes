#include<bits/stdc++.h>
using namespace std;

void primsAlgo(unordered_map<int, list<pair<int, int>>>& adjList, int src1)
{

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

    primsAlgo(adjList, 0, dist);
    
    for(int i = 0; i < vertices; i++)
    {
        cout << dist[i] << " ";
    }
    cout << endl;

    return 0;
}