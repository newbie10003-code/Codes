#include<bits/stdc++.h>
using namespace std;

int primsAlgo(unordered_map<int, list<pair<int, int>>>& adjList, vector<int>& parent, vector<bool>& mst, vector<int>& key, int node)
{
    int n = adjList.size();
    key[node] = 0;
    parent[node] = -1;
    
    int minWeight = 0;
    for (int i = 0; i < n; i++)
    {
        int mini = INT_MAX, u;
        for (int j = 0; j < n; j++)
        {
            if (key[j] < mini)
            {
                mini = key[j];
                u = j;
            }
        }
        mst[u] = true;
        for (auto nbr : adjList[u])
        {
            int v = nbr.first;
            int wt = nbr.second;
            if(wt < key[v] && mst[v] == false)
            {
                key[v] = wt;
                parent[v] = u;
            }
        }
    }
    
    int sum = 0;
    for (int i = 0; i < key.size(); i++)
    {
        sum += key[i];
    }
    return sum;
}

int main()
{
    int vertices, edges, u, v, w;
    unordered_map<int, list<pair<int, int>>> adjList;
    vector<int> key(vertices, INT_MAX);
    vector<bool> mst(vertices, false);
    vector<int> parent(vertices, -1);
    
    cin >> vertices >> edges;
    
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v >> w;
        adjList[u].push_back(make_pair(v, w));
        adjList[v].push_back(make_pair(u, w));
    }

    cout  << primsAlgo(adjList, parent, mst, key, 0) << endl;
    return 0;
}