#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s;
    stack<int>ans;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    int i = 0, n = s.size();
    while (i < n)
    {
        if (i == n/2)
        {
            s.pop();
            i++;
            continue;
        }
        ans.push(s.top());
        s.pop();
        i++;
    }
    cout << "Ans Stack: " << endl;
    while (ans.empty() != 1)
    {
        cout << ans.top() << " ";
        ans.pop();
    }
    cout << endl;
    return 0;
}