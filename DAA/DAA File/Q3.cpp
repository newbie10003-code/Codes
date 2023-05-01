#include <bits/stdc++.h>
using namespace std;

void jumpSearch(int a[], int n, int key)
{
    int currIndex = 1, prevIndex = 0;
    if (a[0] == key)
    {
        cout << "Key found at index: " << 0 << endl;
        return;
    }
    while (a[currIndex] < key && currIndex < n)
    {
        prevIndex = currIndex;
        currIndex = currIndex * 2;
    }
    if (currIndex >= n)
    {
        cout << "Key not found" << endl;
        return;
    }
    for (int i = prevIndex; i <= currIndex; i++)
    {
        if (a[i] == key)
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
    int n, temp;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int key;
    cin >> key;
    jumpSearch(a, n, key);
    return 0;
}
