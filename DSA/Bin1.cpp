#include<bits/stdc++.h>
using namespace std;

void input(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}

void print(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}

int first(int a[], int n, int k){
    int s=0, e=n-1, mid=s+(e-s)/2;
    int ans=-1;
    while (s<=e)
    {
        if (a[mid]==k)
        {
            ans=mid;
            e=mid-1;
        }
        else if (a[mid]<k)
        {
            s=mid+1;
        }
        else if (a[mid]>k)
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int last(int a[], int n, int k, int q){
    int s=k+1, e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if(a[mid]==q){
            ans=mid;
            e=mid-1;
        }
        else if (a[mid]<q)
        {
            s=mid+1;
        }
        else if (a[mid]>q)
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int n, k;
    cin>>n>>k;
    int a[n];
    input(a, n);
    sort(a, a+n);
    int m=first(a, n, k);
    if (m==-1)
    {
        cout<<m<<" "<<m<<endl;
    }
    else
    {
        int p=last(a, n, m, k);
        if (p==-1)
        {
            cout<<m<<" "<<m<<endl;
        }
        else
        {
            cout<<m<<" "<<p<<endl;
        }
    }
    return 0;
}