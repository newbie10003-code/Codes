// #include<bits/stdc++.h>
// using namespace std;

// int bin(int a[], int n, int k){
//     int s=0, e=n-1;
//     int mid=s+(e-s)/2;
//     while (s<=e)
//     {
//         if (a[mid]==k)
//         {
//             return mid;
//         }
//         else if (a[mid]<k)
//         {
//             s=mid+1;
//         }
//         else if (a[mid]>k)
//         {
//             e=mid-1;
//         }
//         mid=s+(e-s)/2;
//     }
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int a[n], b[n];
//     for (int i = 0; i < n; i++)
//     {   
//         cin>>a[i];
//         b[i]=a[i];
//     }
//     sort(b, b+n);
//     int key=b[n-1];
//     cout<<bin(a, n, key)<<endl;
//     return 0;
// }


//alternate approach

#include<bits/stdc++.h>
using namespace std;

int bin(int a[], int n){
    int s=0, e=n-1;
    int mid=s+(e-s)/2;
    while (s<e)
    {
        if (a[mid]<a[mid+1])
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
    int ans=bin(a, n);
    cout<<ans<<endl;
    return 0;
}