#include <bits/stdc++.h>
using namespace std;

void findPair(int arr[], int n, int key)
{
    sort(arr, arr + n);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int start = i + 1, end = n - 1, mid;
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
    int testCases;
    cout << "Enter total number of test cases" << endl;
    cin >> testCases;
    while (testCases--)
    {
        int n, key;
        cout << "Enter total number of elements\n";
        cin >> n;
        int arr[n];
        cout << "Enter elements of the array" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << "Enter key" << endl;
        cin >> key;
        findPair(arr, n, key);
    }
    return 0;
}
