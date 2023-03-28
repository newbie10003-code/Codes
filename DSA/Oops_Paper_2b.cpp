#include<bits/stdc++.h>
using namespace std;

bool palindrome(string &s, int j, int i){
    int temp = 0;
    bool ans = true;
    while (s[j + temp] != s[i])
    {
        if (s[j + temp] != s[i - temp - 1])
        {
            ans = false;
            return ans;
        }
        temp++;
    }
    while (s[j] != s[i])
    {
        s[j] = '*';
        j++;
    }
}

int main()
{
    string s;
    getline(cin, s);
    int i = 0, j = 0;
    bool ans;
    while (s[i] != '\0')
    {
        if (s[i] == ' ' || i == s.length())
        {
            ans = palindrome(s, j, i);
            j = i + 1;
        }
        i++;
    }
    cout << s << endl;
    return 0;
}