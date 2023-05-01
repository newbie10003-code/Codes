#include <bits/stdc++.h>
using namespace std;

void findIndices(int arr[], int n)
{
    int start, end, mid, k = -1;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            start = j + 1;
            end = n - 1;
            while (start <= end)
            {
                int mid = start + (end - start) / 2;
                if (arr[mid] == (arr[i] + arr[j]))
                {
                    k++;
                    cout << i << " " << j << " " << mid << endl;
                    start = end + 1;
                }
                else if (arr[mid] < (arr[i] + arr[j]))
                    start = mid + 1;
                else
                    end = mid - 1;
            }
        }
    }
    if (k == -1)
        cout << "No such sequence" << endl;
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
        findIndices(arr, n);
    }
    return 0;
}
