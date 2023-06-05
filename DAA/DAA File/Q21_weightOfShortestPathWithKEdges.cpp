#include<bits/stdc++.h>
using namespace std;

void dfs(unordered_map<int, list<pair<int, int>>>& adjList, int src, int dest, vector<vector<int>>& paths, vector<int>& dist, vector<int>& temp, int& weight)
{
    if(src == dest)
    {
        paths.push_back(temp);
        dist.push_back(weight);
        return;
    }

    for (auto nbr : adjList[src])
    {
        temp.push_back(nbr.first);
        weight = weight + nbr.second;
        dfs(adjList, nbr.first, dest, paths, dist, temp, weight);
        weight = weight - nbr.second;
        temp.pop_back();
    }
}

int main()
{
    int vertices, edges, u, v, w;
    unordered_map<int, list<pair<int, int>>> adjList;
    unordered_map<int, bool> visited;
    vector<int> dist;
    
    cin >> vertices >> edges;
    
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v >> w;
        adjList[u].push_back({v, w});
    }

    int src, dest, k, ans = INT_MAX, weight = 0;
    cin >> src >> dest >> k;
    vector<vector<int>> paths;
    vector<int> temp;
    temp.push_back(src);

    dfs(adjList, src, dest, paths, dist, temp, weight);
    
    for (int i = 0; i < paths.size(); i++)
    {        
        if (paths[i].size() - 1 == k && dist[i] < ans)
        {
            ans = dist[i];
        }
    }
    
    if(ans == INT_MAX)
        cout << "No path of length k is available" << endl;
    else
        cout << "Weight of shortest path from (src, dest) with k edges: " << ans << endl;
    
    return 0;
}