// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,k;
//     cin>>n;
//     int a[n];
//     if (n%2==1)
//     {
//         k=n-1;
//     }
//     else
//     {
//         k=n;
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     for (int i = 0; i < k; i++)
//     {
//         swap(a[i],a[i+1]);
//         i++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, ans=0;
//     cin>>n;
//     int a[n], b[1000]={0};
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//         b[a[i]]++;
//         ans=ans^a[i];
//     }
//     // for (int i = 0; i < 1000; i++)
//     // {
//     //     if(b[i]==1){
//     //         cout<<i<<endl;
//     //     }
//     // }
//     cout<<ans<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, f=0;
//     cin>>n;
//     int a[n], b[1000]={0},c[1000]={0};
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//         b[a[i]]++;
//     }
//     for (int i = 0; i < 1000; i++)
//     {
//         if(b[i]!=0){
//             c[b[i]]++;
//         }
//     }
//     for (int i = 0; i < 1000; i++)
//     {
//         if(c[i]>1){
//             cout<<"false"<<endl;
//             f=0;
//             break;
//         }
//         else
//         {
//             f++;
//         }
//     }
//     if (f!=0)
//     {
//         cout<<"true"<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n], b[1000]={0};
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//         b[a[i]]++;
//     }
//     for (int i = 0; i < 1000; i++)
//     {
//         if (b[i]>=2)
//         {
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n], b[1000]={0};
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//         b[a[i]]++;
//     }
//     for (int i = 0; i < 1000; i++)
//     {
//         if (b[i]>=2)
//         {
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,m;
//     cin>>m>>n;
//     int a[m], b[n], c[1000]={0};
//     for (int i = 0; i < m; i++)
//     {
//         cin>>a[i];
//         c[a[i]]++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cin>>b[i];
//         if(c[b[i]]!=0){
//             cout<<b[i]<<" ";
//         }
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int>a;
//     vector<vector<int>>b;
//     int n, m;
//     cin>>n>>m;
//     for (int i = 0; i < n; i++)
//     {
//         int temp;
//         cin>>temp;
//         a.push_back(temp);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             int ans=a[i]+a[j];
//             vector<int>temp;
//             if(ans==m){
//                 temp.push_back(min(a[i], a[j]));
//                 temp.push_back(max(a[i], a[j]));
//                 b.push_back(temp);
//             }
//         }
//     }
//     sort(b.begin(), b.end());
//     for (auto row: b)
//     {
//         for (auto e: row)
//         {
//             cout<<e<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//sort 0, 1, 2
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int low=0, mid=0, high=n-1;
    while (mid<high)
    {
        if(a[mid]==0){
            swap(a[low],a[mid]);
            low++;
            mid++;
        }
        if(a[mid]==1){
            mid++;
        }
        if(a[mid]==2){
            swap(a[mid], a[high]);
            mid++;
            high--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}