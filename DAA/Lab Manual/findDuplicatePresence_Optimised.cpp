#include<bits/stdc++.h>
using namespace std;

void findDuplicatePresence(vector<int>& a)
{
    unordered_map<int, int> m;
    for (int i = 0; i < a.size(); i++)
    {
        m[a[i]]++;
    }
    for(auto i : m)
    {
        if(i.second > 1)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
    return;
}

int main()
{
    vector<int> a = {75, 65, 1, 65, 2, 6, 86, 2, 75, 8};
    findDuplicatePresence(a);
    return 0;
}