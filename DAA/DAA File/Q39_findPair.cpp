#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    
    vector<vector<int>> pairs;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            pairs.push_back({nums[i] * nums[j], nums[i], nums[j]});
        }
    }
    
    sort(pairs.begin(), pairs.end());

    for (int i = 1; i < pairs.size(); i++)
    {
        if(pairs[i][0] == pairs[i - 1][0])
        {
            cout << pairs[i][1] << " " << pairs[i][2] << endl;
            cout << pairs[i - 1][1] << " " << pairs[i - 1][2] << endl;
            break;
        }
    }
    
    return 0;
}