#include<bits/stdc++.h>
using namespace std;

void twoSum(vector<int>& a)
{
    for(int i = 0; i < a.size(); i++)
    {
        for(int j = 0; j < a.size(); j++)
        {
            int sum = a[i] + a[j];
            if(binary_search(a.begin(), a.end(), sum) && i != j)
            {
                cout << "i: " << i << " j: " << j << endl;
                return;
            }
        }
    }
    cout << "No such pair found" << endl;
    return;
}

int main()
{
    vector<int> a;
    int n, temp;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }
    twoSum(a);
    return 0;
    return 0;
}