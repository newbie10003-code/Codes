#include<bits/stdc++.h>
using namespace std;

int celebrity(vector<vector<int>>&v, int n){
    stack<int>s;
    // Push all elements in stack
    for (int i = 0; i < n; i++)
    {
        s.push(i);
    }
    // Find the celebrity
    while (s.size() != 1)
    {
        int a = s.top();
        s.pop();
        int b = s.top();
        s.pop();
        if (v[a][b] == 1)
        {
            s.push(b);
        }
        else if (v[b][a] == 1)
        {
            s.push(a);
        }
    }
    // step 3: Verify the celebrity
    bool ans = true;
    int temp = s.top();
    for (int i = 0; i < n; i++)
    {
        if (temp == i)
        {
            continue;
        }
        if (v[temp][i])
        {
            ans = false;
            break;
        }
        if (v[i][temp] == 0)
        {
            ans = false;
            break;
        }
    }
    if (ans == true)
    {
        return temp;
    }
    else
    {
        return -1;
    }
}

int main()
{    
    vector<vector<int>>v = {{0, 1, 0}, {0, 0, 0}, {0, 1, 0}};
    cout << celebrity(v, 3) << endl;
    return 0;
}