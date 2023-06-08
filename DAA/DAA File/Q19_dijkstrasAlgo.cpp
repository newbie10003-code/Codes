#include <bits/stdc++.h>
using namespace std;

void dijkstra(unordered_map < int, list<pair<int, int>>> &adjList, set<pair<int , int>> &st, vector<int> &dist)
{
    while(!st.empty())
    {
        auto top = *(st.begin());
        int nodeDist = top.first;
        int node = top.second;
        st.erase(st.begin());

        for(auto neighbour : adjList[node])
        {
            if(nodeDist + neighbour.second < dist[neighbour.first])
            {
                auto record = st.find(make_pair(dist[neighbour.first] , neighbour.first));
                if(record != st.end())
                    st.erase(record);
                dist[neighbour.first] = nodeDist + neighbour.second;
                st.insert(make_pair(dist[neighbour.first] , neighbour.first));
            }   
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    unordered_map<int, list<pair<int, int>>> adjList;
    set<pair<int , int>>st;
    vector<int> dist(n, INT_MAX);
    dist[0] = 0;
    st.insert(make_pair(0,0));
    int u, v, w;
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        adjList[u].push_back(make_pair(v, w));
        adjList[v].push_back(make_pair(u, w));
    }
    dijkstra(adjList, st, dist);

    for (auto i : dist)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
