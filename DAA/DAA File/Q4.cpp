#include <bits/stdc++.h>
using namespace std;

int duplicate(int arr[], int n, int key, int search)
{
    int start = 0, end = n - 1, pos = -1, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (key == arr[mid])
        {
            pos = mid;
            if (search)
                end = mid - 1;
            else
                start = mid + 1;
        }
        else if (key > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    return pos;
}
int main()
{
    int testCases;
    cout << "Enter total number of test cases" << endl;
    cin >> testCases;
    while (testCases--)
    {
        int n;
        cout << "Enter total number of elements\n";
        cin >> n;
        int arr[n];
        cout << "Enter elements of the array" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int key;
        cout << "Enter element to find duplicate" << endl;
        cin >> key;
        int first = duplicate(arr, n, key, 1);
        int last = duplicate(arr, n, key, 0);
        int count = last - first + 1;
        if (first == -1)
            cout << "Element not present" << endl;
        else
            cout << key << " " << count << endl;
    }
    return 0;
}
