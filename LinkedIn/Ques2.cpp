#include<bits/stdc++.h>
using namespace std;

unordered_map<char, int> freq;

static bool comp(char a, char b)
{
    return freq[a] > freq[b];    
}

string sortString(string s)
{
    for(int i = 0; i < s.size(); i++)
        freq[s[i]]++;

    sort(s.begin(), s.end(), comp);
    return s;
}

int main()
{
    string s = "tree";
    cout << sortString(s) << endl;
    return 0;
}