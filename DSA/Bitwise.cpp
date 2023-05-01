// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, sum=0;
//     cin>>n;
//     while (n)
//     {
//         int rem=n%10;
//         if (((sum*10)>INT_MAX) || ((sum*10)<INT_MIN))
//         {
//             cout<<0<<endl;
//             exit(0);
//         }
//         sum=(sum*10)+rem;
//         n/=10;
//     }
//     cout<<sum<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     if (n==0)
//     {
//         cout<<1<<endl;
//     }
    
//     int m=n, mask=0;
//     while (m!=0)
//     {
//         mask=(mask<<1)|1;
//         m=m>>1;
//     }
//     int ans=(~n)&mask;
//     cout<<ans<<endl;
//     return 0;
// } 


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, f=0;
    cin>>n;
    for (int i = 0; i < 31; i++)
    {
        if(n==pow(2,i)){
            cout<<"Yes"<<endl;
            f=0;
            break;
        }
        else    f++;
    }
    if (f!=0)
    {
        cout<<"No"<<endl;
    }
    return 0;
}