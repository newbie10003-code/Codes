#include<bits/stdc++.h>
using namespace std;

int fileMerge(vector<int>& files)
{
    vector<int> prefix(files.size());
    sort(files.begin(), files.end());
    prefix[0]=files[0];
    int ans = 0;
    for (int i = 1; i < files.size(); i++)
    {
        ans += files[i] + files[i - 1];
        prefix[i] = prefix[i-1] + files[i];
        // files[i - 1] = 0;
        files[i] = ans;
    }
    // return files[files.size() - 1];
    return accumulate(prefix.begin(), prefix.end(),0)-files[0];
}

int main()
{
    int n; cin >> n;
    vector<int> files(n);
    for (int i = 0; i < n; i++)
    {
        cin >> files[i];
    }
    cout << fileMerge(files) << endl;
    return 0;
}