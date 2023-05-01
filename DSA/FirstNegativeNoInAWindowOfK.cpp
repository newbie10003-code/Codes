#include<bits/stdc++.h>
using namespace std;

// vector<int> FNI(int a[], int n, int k)
// {
//     deque <int> dq;
//     vector <int> ans;
//     // Processing first k window
//     for (int i = 0; i < k; i++)
//     {
//         if (a[i] < 0)
//         {
//             dq.push_back(i);
//         }
//     }
//     // Store answer of first k window
//     if (dq.size() > 0)
//     {
//         ans.push_back(a[dq.front()]);
//     }
//     else
//     {
//         ans.push_back(0);
//     }
//     // Processing next window(s)
//     for (int i = k; i < n; i++)
//     {
//         // Removal
//         if (!dq.empty() && i - dq.front() >= k)
//         {
//             dq.pop_front();
//         }
//         // Addition
//         if (a[i] < 0)
//         {
//             dq.push_back(i);
//         }
//         // Ans Store
//         if (dq.size() > 0)
//         {
//             ans.push_back(a[dq.front()]);
//         }
//         else
//         {
//             ans.push_back(0);
//         }
//     }
//     return ans;
// }

vector <int> FNI(int a[], int n, int k)
{
    vector <int> ans;
    int i = 0;
    while (i < n)
    {
        int temp = k;
        bool temp_ans = false;
        while (temp != 0)
        {
            if (a[i] < 0)
            {
                ans.push_back(a[i]);
                i++;
                temp_ans = true;
                break;
            }
            i++;            
            temp--;
        }
        if (temp_ans == false)
        {
            ans.push_back(0);
            i++;
        }
    }
    return ans;
}

int main()
{
    int a[] = {-8, 2, 3, -6, 10};
    vector <int> ans = FNI(a, 5, 2);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}