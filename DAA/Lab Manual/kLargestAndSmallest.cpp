#include<bits/stdc++.h>
using namespace std;

/*oid kLargestAndSmallest(vector<int>& a, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < k; i++)
    {
        pq.push(a[i]);
    }
    for(int i = k; i < a.size(); i++)
    {
        if(a[i] > pq.top())
        {
            pq.pop();
            pq.push(a[i]);
        }
    }
    cout << "Kth largest is: " << pq.top() << endl;
}*/

void kLargestAndSmallest(vector<int>& a,int k)
{
    priority_queue<int,vector<int>,greater<int>>pq;
    for(auto i: a)
    {
        pq.push(i);
        if(pq.size()>k)
        pq.pop();
    }

    cout<< pq.top()<<endl;
}

int main()
{
    vector<int> a = {43, 64, 13, 78, 864, 346, 786, 456, 21, 19, 8, 434, 76, 270, 601};
    kLargestAndSmallest(a, 3);
//     sort(a.begin(), a.end());
//     cout << "Kth largest is: " << a[a.size() - 3] << endl;
//     return 0;
//     return 0;
}