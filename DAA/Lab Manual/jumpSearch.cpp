#include<bits/stdc++.h>
using namespace std;

void jumpSearch(vector<int>& a, int key)
{
    int currIndex = 1, prevIndex = 0;
    if(a[0] == key)
    {
        cout << "Key found at index: " << 0 << endl;
        return;
    }
    while (a[currIndex] < key && currIndex < a.size()) 
    {
        prevIndex = currIndex;
        currIndex = currIndex * 2;
    }
    if(currIndex >= a.size())
    {
        cout << "Key not found" << endl;
        return;
    }
    for (int i = prevIndex; i <= currIndex; i++)
    {
        if(a[i] == key)
        {
            cout << "Key found at index: " << i << endl;
            return;
        }
    }
    cout << "Key not found" << endl;
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
    jumpSearch(a, key);
    return 0;
}