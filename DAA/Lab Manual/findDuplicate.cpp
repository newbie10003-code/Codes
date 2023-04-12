#include<bits/stdc++.h>
using namespace std;

pair<bool, int> findKey(vector<int>& a, int key)
{
    int start = 0, end = a.size() - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if(a[mid] == key)
        {
            pair<bool, int> p = make_pair(true, mid);
            // cout << "Key found at index: " << mid << endl;
            return p;
        }
        else if(a[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    pair<bool, int> p = make_pair(false, -1);
    // cout << "Key not found" << endl;
    return p;
}

void findDuplicate(vector<int>& a, int target)
{
    int count = -1;
    pair<bool, int> p = findKey(a, target);
    if(p.first == true)
    {
        for(int i = p.second; i >= 0; i--)
        {
            if(a[i] != target)
            {
                break;
            }
            count++;
        }
        for(int i = p.second; i < a.size(); i++)
        {
            if(a[i] != target)
            {
                break;
            }
            count++;
        }
        cout << "Count of duplicate element: " << count << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
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
    findDuplicate(a, key);
    return 0;
}