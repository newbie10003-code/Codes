#include<bits/stdc++.h>
using namespace std;

int main()
{
    int vertices, e , u , v , w;
    cin>>vertices>>e;

    vector<vector<int>>adj(vertices,vector<int>(vertices , INT_MAX));

    for(int i = 0 ; i < vertices ; i++)
        adj[i][i] = 0;
    for(int i = 0 ; i < e ; i++)
    { 
        cin >> u >> v >> w;
        adj[u][v] = w;

    } 

    for(int i = 0 ; i<vertices ; i++)
    {
        for(int j = 0 ; j < vertices ;  j++)
        {
            for(int k = 0 ; k < vertices ; k++)
            {
                if(adj[i][j] > (adj[i][k] + adj[k][j]) and (adj[i][k] != INT_MAX and adj[k][j] != INT_MAX))
                    adj[i][j] = adj[i][k] + adj[k][j];
            }
        }
    }

    for(int i = 0 ; i < vertices ; i++)
    {
        for(int j = 0 ; j < vertices ; j++)
        {
            if(adj[i][j] == INT_MAX)
                cout<<"INF ";
            else
                cout<< adj[i][j] <<" ";
        }
        cout<<endl;
    }
    return 0;
}
