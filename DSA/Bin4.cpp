#include<bits/stdc++.h>
using namespace std;

int pivot(int a[], int n){
    int s=0, e=n-1, mid=s+(e-s)/2;
    while (s<e)
    {
        if(a[mid]>=a[0])
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

int bin(int a[], int n, int p, int k){
    int s=p, e=n-1, mid=s+(e-s)/2;
    while (s<=e)
    {
        if (a[mid]==k)
        {
            return mid;
        }
        else if (a[mid]>k)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int main()
{
    int n, k, result;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int p=pivot(a, n);
    cout<<p<<endl;
    if (k>=a[p] && k<=a[n-1])
    {
        result=bin(a, n, p, k);
    }
    else
    {
        result=bin(a, p, 0, k);
    }
    cout<<result<<endl;
    return 0;
}