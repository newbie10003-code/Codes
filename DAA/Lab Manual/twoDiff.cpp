#include <bits/stdc++.h>
using namespace std;

void twoDiff(vector<int> &a, int key)
{
    int count = 0;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i + 1; j < a.size(); j++)
        {
            if (abs(a[i] - a[j]) == key)
            {
                cout << "i: " << i << " j: " << j << endl;
                count++;
            }
        }
    }
    cout << "The total count is: " << count << endl;
    return;
}

void findPair(vector<int> &arr, int key)
{
    sort(arr.begin(), arr.end());
    int cnt = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int start = i + 1, end = arr.size() - 1, mid;
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (arr[mid] - arr[i] == key)
            {
                cnt++;
                break;
            }
            else if (arr[mid] - arr[i] > key)
                end = mid - 1;
            else
                start = mid + 1;
        }
    }
    cout << cnt << endl;
}

int main()
{
    vector<int> a;
    int n, temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }
    int key;
    cin >> key;
    twoDiff(a, key);
    findPair(a, key);
    return 0;
}