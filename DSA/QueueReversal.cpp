#include<bits/stdc++.h>
using namespace std;

void reversal(queue<int> &q)
{
    if (q.empty())
    {
        return;
    }
    int ans = q.front();
    q.pop();
    reversal(q);
    cout << ans << " ";
}

int main()
{
    queue<int>q;
    q.push(4);
    q.push(3);
    q.push(1);
    q.push(10);
    q.push(2);
    q.push(6);
    reversal(q);
    cout << endl;
    return 0;
}