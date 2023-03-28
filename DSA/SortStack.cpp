#include<bits/stdc++.h>
using namespace std;

void sortedinsert(stack<int> &s, int num){
    if (s.empty() || (!s.empty() && (s.top() < num)))
    {
        s.push(num);
        return;
    }
    int n = s.top();
    s.pop();
    sortedinsert(s, num);
    s.push(n);
}

void sortStack(stack<int> &s){
    if (s.empty())
    {
        return;
    }
    int num = s.top();
    s.pop();
    sortStack(s);
    sortedinsert(s, num);
}

int main()
{
    stack<int>s;
    s.push(6);
    s.push(9);
    s.push(5);
    s.push(3);
    s.push(8);
    s.push(0);
    s.push(-2);
    sortStack(s);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}