#include<bits/stdc++.h>
using namespace std;

bool cycleDetection(unordered_map<int, list<int>>& adjList, unordered_map<int, bool>& visited, unordered_map<int, bool>& dfsVisited, int node)
{
    visited[node] = dfsVisited[node] = true;
    for (auto nbr : adjList[node])
    {
        if (!visited[nbr])
        {
            bool ans = cycleDetection(adjList, visited, dfsVisited, nbr);
            if (ans)
            {
                return ans;
            }
        }
        else if (dfsVisited[nbr])
        {
            return true;
        }
    }
    dfsVisited[node] = false;
    return false;
}

int main()
{
    int vertices, edges, u, v;
    unordered_map<int, list<int>> adjList;
    unordered_map<int, bool> visited;
    unordered_map<int, bool> dfsVisited;
    
    cin >> vertices >> edges;
    
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;
        adjList[u].push_back(v);
    }

    int ans = cycleDetection(adjList, visited, dfsVisited, 0);
    if (ans)
        cout << "Yes Cycle Exists" << endl;
    else
        cout << "No Cycle Exists" << endl;
    return 0;
}
