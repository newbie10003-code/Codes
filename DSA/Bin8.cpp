#include<bits/stdc++.h>
using namespace std;

bool is(vector<int>&a, int k, int mid){
    int cow = 1;
    int last=a[0];
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i]-last>=mid)
        {
            cow++;
            if (cow==k)
            {
                return true;
            }
            last = a[i];
        }
    }
    return false;
}

int main()
{
    int n, k;
    cin>>n>>k;
    vector<int>a;
    int ma, mi;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        a.push_back(temp);
        ma=*max_element(a.begin(), a.end());
        mi=*min_element(a.begin(), a.end());
    }
    sort(a.begin(), a.end());
    int s=0, e=ma, mid=s+(e-s)/2, ans=-1;
    while (s<e)
    {
        if (is(a, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
           e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    cout<<ans<<endl;
    return 0;
}