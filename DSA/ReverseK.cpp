#include<bits/stdc++.h>
using namespace std;

void ReverseK(queue <int> &q, int k)
{
    for (int i = 0; i < k; i++)
    {
        /* code */
    }
    
}

int main()
{
    queue <int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    ReverseK(q, 3);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}