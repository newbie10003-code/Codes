/*
Given a directed graph with two vertices ( source and destination). Design an algorithm and
implement it using a program to find the weight of the shortest path from source to destination
with exactly k edges on the path.
*/

#include <bits/stdc++.h>
using namespace std;

void dfs(int src, int dest, vector<int> &path, vector<vector<int>> &allPaths, unordered_map<int, list<pair<int, int>>> &adjList, vector<int> &weights, int wt)
{
    if (src == dest)
    {
        weights.push_back(wt);
        allPaths.push_back(path);
        return;
    }

    for (auto neighbour : adjList[src])
    {
        wt += neighbour.second;
        path.push_back(neighbour.first);
        dfs(neighbour.first, dest, path, allPaths, adjList, weights, wt);
        wt -= neighbour.second;
        path.pop_back(); // for weight
    }
}

int shortest(vector<vector<int>> allPaths, int k, vector<int> &weights)
{
    // vector<vector<int>>pathWithK;
    // vector<int>sizePaths(allPaths.size());
    // int j = 0;
    // for(auto i : allPaths)
    // {
    //     sizePaths[j] = i.size();
    //     j++;
    // }
    // for(int i = 0 ; i< allPaths.size() ; i++)
    // {
    //     if(sizePaths[i] - 1 == k) // sizePaths will give num of vertices so -1
    //     {
    //         pathWithK.push_back()
    //     }
    // }

    for (auto i = 0; i < allPaths.size(); i++)
    {
        cout << weights[i] << " ";
        if (allPaths[i].size() != k)
        {
            // auto itr = find(allPaths.begin() , allPaths.end() , i);
            // allPaths.erase(itr);
            weights[i] = 0;
        }
        // allPaths.erase(i);
    }
    cout << endl;
    sort(weights.begin(), weights.end());
    int ans;
    for (int i : weights)
    {
        if (i != 0)
        {
            ans = i;
            break;
        }
    }
    // cout << ans << endl;
    return ans;
}

int main()
{
    int vertices, e, u, v, w, k, src, dest;
    cout << "Enter number of vertices and edges" << endl;
    cin >> vertices >> e;
    unordered_map<int, list<pair<int, int>>> adjList;

    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        adjList[u].push_back(make_pair(v, w));
    }
    cout << "Enter source and destination" << endl;
    cin >> src >> dest;
    cout << "Enter k" << endl;
    cin >> k;
    vector<vector<int>> allPaths;
    vector<int> path;
    vector<int> weights;
    dfs(src, dest, path, allPaths, adjList, weights, 0);
    int ans;
    // cout << ans << endl;
    ans = shortest(allPaths, k, weights);
    cout << "ans = " << ans << endl;
}