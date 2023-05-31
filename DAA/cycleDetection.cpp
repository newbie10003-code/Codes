// #include<bits/stdc++.h>
// using namespace std;

// bool cycleDFS(unordered_map<int, list<int>>& adj, unordered_map<int, bool>& visited, unordered_map<int, bool>& dfsVisited, int node)
// {
//     visited[node] = dfsVisited[node] = true;
//     for (auto i : adj[node])
//     {
//         if (!visited[node])
//         {
//             cycleDFS(adj, visited, dfsVisited, i);
//         }
//         if(dfsVisited[i])
//             return true;
//     }
//     dfsVisited[node] = false;
// }

// int main()
// {
//     unordered_map<int, list<int>> adj;
//     int n, u, v;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> u >> v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     unordered_map<int, bool> visited;
//     unordered_map<int, bool> dfsVisited;
//     bool ans = cycleDFS(adj, visited, dfsVisited, 0);
//     if (ans)
//     {
//         cout << true << endl;
//         return 0;
//     }
//     cout << false << endl; 
//     return 0;
// }

// #include<unordered_map>
// #include<set>
// #include<vector>
// #include<list>
#include<bits/stdc++.h>
using namespace std;
 
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    // create adjacency list
    unordered_map< int , list < pair < int , int > > > adj;
    for(int i = 0 ; i < vertices ; i++)
    {
        int u = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }
    vector<int>dist(vertices,INT_MAX);
    set<pair<int , int>>st;
    dist[source] = 0;
    st.insert(make_pair(0,source)); // for source

    while(!st.empty())
    {
        auto top = *(st.begin());
        
        int nodeDist = top.first;
        int node = top.second;
        st.erase(st.begin());

        for(auto neighbour : adj[node])
        {
            if( (neighbour.second + nodeDist) < dist[neighbour.first])
            {
                auto record = st.find(make_pair(dist[neighbour.first], neighbour.first));
                if(record != st.end())
                    st.erase(record);
                dist[neighbour.first] = neighbour.second + nodeDist;
                st.insert(make_pair(dist[neighbour.first] , neighbour.first));
            }
               
        }
    }
    return dist;
}