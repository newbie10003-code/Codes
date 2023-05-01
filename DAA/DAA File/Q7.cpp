#include <bits/stdc++.h>
using namespace std;
void insertion(int arr[], int n)
{
    int comp = 0, shift = 0;
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            shift++;
            comp++;
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        shift++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Comparisons = " << comp << endl;
    cout << "Shifts = " << shift << endl;
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
        insertion(arr, n);
    }
    return 0;
}
