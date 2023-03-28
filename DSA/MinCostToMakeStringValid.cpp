#include<bits/stdc++.h>
using namespace std;

// My Logic - Partially Accepted1
int valid_string(string s){
    stack<char> st;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == '{')
        {
            st.push(ch);
        }
        else
        {
            if (st.empty() == true)
            {
                count++;
            }
            else
            {
                if (st.top() == '{')
                {
                    st.pop();
                }
            }
        }
    }
    while (!st.empty())
    {
        count++;
        st.pop();
    }
    if (count % 2 == 0)
    {
        return count/2;
    }
    return -1;
}

// Babbar's Logic
int min_cost(string s){
    if (s.length() % 2 == 1)
    {
        return -1;
    }
    // Remove valid part
    stack<char>st; int a = 0, b = 0;    
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '{')
        {
            st.push(s[i]);
        }
        else
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
    }
    while (!st.empty())
    {
        if (st.top() == '{')
        {
            a++;
        }
        else
        {
            b++;
        }
        st.pop();
    }
    return ((a+1)/2) + ((b+1)/2);
}

int main()
{
    string s = "}}}{{{";
    cout << min_cost(s) << endl;
    return 0;
}