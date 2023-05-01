#include <bits/stdc++.h>
using namespace std;

void binSearch()
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
    int key, loc = -1, cmp = 0;
    cout << "Enter element to search" << endl;
    cin >> key;
    int start = 0, end = n - 1;
    while (start <= end)
    {
        cmp++;
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            loc = mid;
            break;
        }
        else if (key > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    if (loc == -1)
        cout << "Element not present in the array " << cmp << endl;
    else
        cout << "Element found" << endl;
}
int main()
{
    int testCases;
    cout << "Enter total number of test cases" << endl;
    cin >> testCases;
    while (testCases--)
        binSearch();
    return 0;
}
