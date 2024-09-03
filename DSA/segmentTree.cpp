#include<bits/stdc++.h>
using namespace std;

void updateQuery(int sl, int sr, int ind, int val, vector<int>& segTree)
{
    if (sl == sr)
    {
        segTree[sl] = val
    }
    
}

int sumQuery(int sl, int sr, int left, int right, vector<int>& segTree)
{

}

int main()
{
    // Step 1 - Input the vector
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Step 2 - Creating a SegmentTree
    

    // Step 3 - Range Queries
    int q; cin >> q;
    while (q--)
    {
        int l, r, type; cin >> l >> r >> type;
        // 1 -> Update (l = ind, r = val)
        if (type == 1)
        {
            updateQuery(0, n - 1, l, r, segTree);
        }
        else if (type == 2)
        {
            cout << sumQuery(0, n - 1, l, r, segTree) << endl;
        }
        
    }   
    
    return 0;
}