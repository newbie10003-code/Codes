#include<bits/stdc++.h>
using namespace std;

void insert_at_bottom(stack <int> &s, int x){
    if (s.empty())
    {
        s.push(x);
        return;
    }
    int num = s.top();
    s.pop();
    insert_at_bottom(s, x);
    s.push(num);
}

void reverseStack(stack <int> &s){
    // base case
    if (s.empty()) 
    {
        return;
    }
    int num = s.top();
    s.pop();
    reverseStack(s);
    insert_at_bottom(s, num);
}

int main()
{
    stack <int> s;
    s.push(7);
    s.push(4);
    s.push(3);
    s.push(9);
    reverseStack(s);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}