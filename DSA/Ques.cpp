// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s;
//     int ans = s.length(), a[128]={0};
//     for (int i = 0; i < s.length(); i++)
//     {
//         a[s[i]]++;
//     }
//     for (int i = 0; i <128 ; i++)
//     {
//         if (a[i]>1)
//         {
//             ans = ans + ((a[i]*(a[i]-1))/2);
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int subs(int hash[], int i, int temp_ans){
//     // cout << "Heloo" << endl;
//     int ans = temp_ans;
//     if( i == -1 ){
//         return temp_ans;
//     }
//     if (hash[i]>1)
//     {
//         ans = ans + (hash[i]*(hash[i]-1)/2);
//         temp_ans = ans;
//         return subs(hash, i-1, temp_ans);
//     } 
//     if (hash[i] == 0 || hash[i] == 1)
//     {
//         return subs(hash, i-1, ans);
//     }
// }

// int main()
// {
//     string s;
//     cin >> s;
//     int ans = s.length(), a[128]={0};
//     for (int i = 0; i < s.length(); i++)
//     {
//         a[s[i]]++;
//     }
//     ans = subs(a, 127, ans);
//     cout << ans << endl;
//     return 0;
// }


