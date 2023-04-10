#include<bits/stdc++.h>
using namespace std;

void findDuplicatePresence(vector<int>& a)
{
    sort(a.begin(), a.end());
    for (int i = 0; i < a.size() - 1; i++)
    {
        if(a[i] == a[i + 1])
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