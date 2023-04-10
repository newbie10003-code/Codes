#include<bits/stdc++.h>
using namespace std;

void findKey(vector<int>& a, int start, int end, int key)
{
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if(a[mid] == key)
        {
            cout << "Key found at index: " << mid << endl;
            return;
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
    findKey(a, 0, a.size() - 1, key);
    return 0;
    return 0;
}