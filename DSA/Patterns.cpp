// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int count=1, n=0;
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout<<count++<<" ";
//         }
//         cout<<endl;
//         count=1;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, count=1;
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout<<count++<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, count=1;
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, count=1;
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, count=1;
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<count++<<" ";
//         }
//         cout<<endl;
//         count=i+1;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, count=1;
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         count=i;
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<count--<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; char count='A';
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout<<count<<" ";
//         }
//         cout<<endl;
//         count++;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; char count='A';
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         count='A';
//         for (int j = 1; j <= n; j++)
//         {
//             cout<<count++<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; char count='A';
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout<<count++<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; char count='A';
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         count='A'+i;
//         for (int j = 0; j < n; j++)
//         {
//             cout<<count++<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; char count='A';
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<count<<" ";
//         }
//         count++;
//         cout<<endl;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; char count='A';
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         count='A'+i;
//         for (int j = 0; j <= i; j++)
//         {
//             cout<<count++<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; char count='A';
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         count='A' + n - i - 1;
//         for (int j = 0; j <= i; j++)
//         {
//             cout<<count++<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         int space=n-i;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }
//         int j=i;
//         while (j)
//         {
//             cout<<"*";
//             j--;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for (int i = n; i >= 1; i--)
//     {
//         int j=i;
//         while (j)
//         {
//             cout<<"*";
//             j--;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for (int i = n; i >= 1; i--)
//     {
//         int space=n-i;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }
//         int j=i;
//         while (j)
//         {
//             cout<<"*";
//             j--;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, count=1;
//     cin>>n;
//     for (int i = n; i >= 1; i--)
//     {
//         int space=n-i;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }
//         int j=i;
//         while (j)
//         {
//             cout<<count;
//             j--;
//         }
//         cout<<endl;
//         count++;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for (int i = 1; i <= n ; i++)
//     {
//         int count=1;
//         int space=n-i;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }
//         int j=i;
//         while (j)
//         {
//             cout<<count++;
//             j--;
//         }
//         int k=i-1;
//         while (k)
//         {
//             cout<<k;
//             k--;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n ; i++)
    {
        int count=1;
        int count2=n-i+1;
        int start=n-i+1;
        while (start)
        {
            cout<<count++;
            start--;
        }
        int j=i-1;
        while (j)
        {
            cout<<"*";
            j--;
        }
        int l=i-1;
        while (l)
        {
            cout<<"*";
            l--;
        }
        
        int k=n-i+1;
        while (k)
        {
            cout<<count2--;
            k--;
        }
        cout<<endl;
    }
    return 0;
}