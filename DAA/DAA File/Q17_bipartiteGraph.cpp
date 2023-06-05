#include<bits/stdc++.h>
using namespace std;

bool isBipartiteGraph(unordered_map<int, list<int>>& adjList, vector<int>& color, int node)
{
    queue<int> q;
    q.push(node);
    while (!q.empty())
    {
        int frontNode = q.front();
        q.pop();
        for(auto nbr : adjList[frontNode])
        {
            // Not yet colored
            if (color[nbr] == -1)
            {
                color[nbr] = !color[frontNode];
                q.push(nbr);
            }
            else if (color[nbr] == color[frontNode])
            {
                return false;
            }            
        }
    }
    return true;
}

int main()
{
    int vertices, edges, u, v;
    unordered_map<int, list<int>> adjList;
    
    cin >> vertices >> edges;
    
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    vector<int> color(vertices, -1);

    int ans = isBipartiteGraph(adjList, color, 0);

    if (ans)
    {
        cout << "Yes Bipartite" << endl;
    }
    else
    {
        cout << "Not Bipartite" << endl;
    }
    
    
    return 0;
}