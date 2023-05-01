#include<bits/stdc++.h>
using namespace std;

double pre(int n, int temp, int p){
    double factor=1;
    double ans=temp;
    for (int i = 0; i < p; i++)
    {
        factor/=10;
        double j=ans;
        // for (double j = ans; j*j < n; j=j+factor)
        // {
        //     ans=j;
        // }
        while (j*j<n)
        {
            ans=j;
            j+=factor;
        }   
    }
    return ans;
}

int main()
{
    int n, p;
    cin>>n>>p;
    int s=0, e=n, ans=-1;
    long long int mid=s+(e-s)/2;
    while (mid<e)
    {
        if (mid*mid>n)
        {
            e=mid-1;
        }
        else if (mid*mid<n)
        {
            ans=mid;
            s=mid+1;
        }
        else if ((mid*mid)==n)
        {
            ans=mid;
            break;
        }
        mid=s+(e-s)/2;
    }
    cout<<"Square root: "<<pre(n, ans, p)<<endl;
    return 0;
}