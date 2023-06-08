#include<bits/stdc++.h>
using namespace std;

void possiblePermutations(string s, vector<string>& ans, int index)
{
    if (index >= s.size())
    {
        ans.push_back(s);
        return;
    }
    for (int j = index; j < s.size(); j++)
    {
        swap(s[index], s[j]);
        possiblePermutations(s, ans, index + 1);
        swap(s[index], s[j]);
    }
}

int main()
{
    string s;
    int index = 0;
    cin >> s;
    vector<string> ans;

    possiblePermutations(s, ans, index); 
    
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    
    return 0;
}