#include<bits/stdc++.h>
using namespace std;

int kthSmallestLargest(vector<int> a, int k)
{
    if(k > a.size())
    {
        return -1;
    }
    
}

int main()
{
    vector<int> a;
    int temp, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }
    int k; cin >> k;
    kthSmallestLargest(a, k);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}