#include<bits/stdc++.h>
using namespace std;

bool matches(char ch, char top){
    if (ch == ')' && top == '(')
    {
        return true;
    }
    else if (ch == '}' && top == '{')
    {
        return true;
    }
    else if (ch == ']' && top == '[')
    {
        return true;
    }
    return false;
}

int main()
{
    string s;
    cin >> s;
    stack <char> ans;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == '(' || ch == '[' || ch == '{')
        {
            ans.push(ch);
        }
        else
        {
            if (!ans.empty())
            {
                // Closing bracket hai
                char top = ans.top();
                if (matches(ch, top))
                {
                    ans.pop();
                }
                else
                {
                    break;
                }
            }
            else
            {
                break;
            }
        }        
    }
    if (ans.empty())
    {
        cout << "Balanced" << endl;
    }
    else
    {
        cout << "Not Balanced" << endl;
    }
    return 0;
}