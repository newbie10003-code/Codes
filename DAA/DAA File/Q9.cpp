#include <bits/stdc++.h>
using namespace std;

void checkDup(int arr[], int n)
{
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
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
        checkDup(arr, n);
    }
    return 0;
}
