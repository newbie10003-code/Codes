#include<bits/stdc++.h>
using namespace std;

unordered_set<int> intersection(vector<int> v1, vector<int> v2)
{
    unordered_set<int> s;
    unordered_map<int, int> count;
    int i, n = v1.size();
    for(i = 0; i < n; i++)
    {
        count[v1[i]] = 1;
    }
    n = v2.size();
    for (i = 0; i < n; i++)
    {
        if(count[v2[i]] == 1)
        {
            s.insert(v2[i]);
        }
    }
    return s;
}

int main()
{
    int n, m, i; cin >> n >> m;
    vector<int> v1, v2;
    int temp;
    for(i = 0; i < n; i++)
    {
        cin >> temp;
        v1.push_back(temp);
    }
    for(i = 0; i < m; i++)
    {
        cin >> temp;
        v2.push_back(temp);
    }
    unordered_set<int> ans = intersection(v1, v2);
    for(auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}