#include<bits/stdc++.h>
using namespace std;

void dijkstraAlgo(unordered_map<int, list<pair<int, int>>>& adjList, int node, vector<int>& dist)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    dist[node] = 0;
    q.push({0, node});
    cout << "Hello" << endl;
    while (!q.empty())
    {
        int top = q.top().second;
        q.pop();
        for(auto nbr : adjList[top])
        {
            int v = nbr.first;
            int w = nbr.second;
            if(dist[top] != INT_MAX && dist[v] > dist[top] + w);
            {
                cout << nbr.first << " ";
                dist[v] = dist[top] + w;
                q.push({dist[v], v});
            }
        }
    }
    cout << endl << "Hello2" << endl;
}

int main()
{
    int vertices, edges, u, v, w;
    unordered_map<int, list<pair<int, int>>> adjList;
    
    cin >> vertices >> edges;
    vector<int> ans(vertices, INT_MAX);
    
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v >> w;
        adjList[u].push_back({v, w});
        adjList[v].push_back({u, w});
    }

    dijkstraAlgo(adjList, 0, ans);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}