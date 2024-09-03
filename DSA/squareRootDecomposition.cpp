#include<bits/stdc++.h>
using namespace std;

int sumQuery(int l, int r, vector<int>& b, vector<int>& a)
{
    int sum = 0, i = l, len = b.size();
    while (i <= r)
    {
        if (i % len == 0 and i + len - 1 <= r)
        {
            sum += b[i / len];
            i += len;
        }
        else
        {
            sum += a[i];
            i += 1;
        }
    }
    return sum;
}

void updateQuery(int ind, int val, vector<int>& b, vector<int>& a)
{
    int blockNo = ind / b.size();
    int diff = val - a[ind];
    a[ind] = val;
    b[blockNo] += diff;
    return;
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
    int len = sqrtl(n) + 1;

    // Step 2 - Precomputation
    vector<int> b(len);
    for (int i = 0; i < n; i++)
    {
        b[i / len] += a[i];
    }

    // Step 3 - Range Queries
    int q; cin >> q;
    while (q--)
    {
        int l, r, type; cin >> l >> r >> type;
        // 1 -> Update (l = ind, r = val)
        if (type == 1)
        {
            updateQuery(l, r, b, a);
        }
        else if (type == 2)
        {
            cout << sumQuery(l, r, b, a) << endl;
        }
        
    }   
    
    return 0;
}