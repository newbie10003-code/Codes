#include<bits/stdc++.h>
using namespace std;

bool red_brac(string s, stack<char>c){
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/' )
        {
            c.push(ch);
        }
        else
        {
            if (ch == ')')
            {
                bool redundant = true;
                while (c.top() != '(')
                {
                    char top = c.top();
                    if ( top == '+' || top == '-' || top == '*' || top == '/')
                    {
                        redundant = false;
                    }
                    c.pop();
                }
                if (redundant == true)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    string s = "(a+b)";
    stack<char>c;
    cout << "Redundant brackets present: " << red_brac(s, c);
    return 0;
}