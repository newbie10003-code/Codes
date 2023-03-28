#include<bits/stdc++.h>
using namespace std;

int pivot(int a[], int n){
    int s=0, e=n-1;
    int mid=s+(e-s)/2;
    while (s<e)
    {
        if (a[mid]>=a[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int m=pivot(a, n);
    cout<<a[m]<<endl;
    return 0;
}