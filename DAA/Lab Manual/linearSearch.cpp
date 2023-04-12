#include<bits/stdc++.h>
using namespace std;

void findKey(vector<int>& a, int key)
{
    for (int i = 0; i < a.size(); i++)
    {
        if(key == a[i])
        {
            cout << "Key found at index: " << i << endl;
            return;
        }
    }
    cout << "Key not found in the array" << endl;
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
    int key; cin >> key;
    findKey(a, key);
    return 0;
}