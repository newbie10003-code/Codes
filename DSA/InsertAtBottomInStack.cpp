#include<bits/stdc++.h>
using namespace std;

void solve(stack<int>& s, int x){
    // base case
    if (s.empty())
    {
        s.push(x);
        return;
    }
    int num = s.top();
    s.pop();
    // recursive call
    solve(s, x);
    s.push(num);
}

stack<int> insert_at_bottom(stack<int>& s, int x){
    solve(s, x);
    return s;
}

int main()
{
    stack<int>s;
    s.push(5);
    s.push(4);
    s.push(1);
    s.push(7);
    cout << s.top() << endl;
    s = insert_at_bottom(s, 10);
    int i = 0, n = s.size();
    while (i < n)
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}