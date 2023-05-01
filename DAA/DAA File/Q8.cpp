#include <bits/stdc++.h>
using namespace std;

void selection(int arr[], int n)
{
    int comp = 0, swaps = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int min = arr[i], loc = i;
        for (int j = i + 1; j < n; j++)
        {
            comp++;
            if (arr[j] < min)
            {
                min = arr[j];
                loc = j;
            }
        }
        if (i != loc)
        {

            swaps++;
            int temp = arr[i];
            arr[i] = arr[loc];
            arr[loc] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Comparisons = " << comp << endl;
    cout << "Swaps = " << swaps << endl;
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
        selection(arr, n);
    }
    return 0;
}
