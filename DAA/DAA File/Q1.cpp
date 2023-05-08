#include <bits/stdc++.h>
using namespace std;

void linearSearch()
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
    for (int i = 0; i < n; i++)
    {
        cmp++;
        if (key == arr[i])
        {
            loc = i;
            break;
        }
    }
    if (loc == -1)
        cout << "Element not present in the array " << cmp << endl;
    else
        cout << "Element found at " << loc << " in " << cmp << endl;
}
int main()
{
    int testCases;
    cout << "Enter total number of test cases" << endl;
    cin >> testCases;
    auto start = chrono::high_resolution_clock::now();
    while (testCases--)
        linearSearch();
    auto end = chrono::high_resolution_clock::now();
    auto time = (end - start).count();
    cout << "Time Complexity: " << time << endl;
    return 0;
}
