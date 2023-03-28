#include<bits/stdc++.h>
using namespace std;

bool is(int a[], int n, int m, int mid){
    int painter=1, paintsum=0;
    for (int i = 0; i < n; i++)
    {
        if (paintsum+a[i]<=mid)
        {
            paintsum+=a[i];
        }
        else
        {
            painter++;
            if (painter>m || a[i]>mid)
            {
                return false;
            }
            paintsum=a[i];
        }
    }
    return true;
}
int main()
{
    int n, m, sum=0;
    cin>>n>>m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    //Binary search approach
    int s=0, e=sum, mid=s+(e-s)/2, ans=-1;
    while (s<e)
    {
        if (is(a, n, m, mid))
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    cout<<ans<<endl;
    return 0;
}