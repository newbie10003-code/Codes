#include <bits/stdc++.h>
using namespace std;

void twoSum(int a[], int n, int key)
{
    int start = 0, end = n - 1, f = 0;
    while (start < end)
    {
        if (a[start] + a[end] == key)
        {
            f = 1;
            cout << a[start] << " " << a[end] << endl;
            start++, end--;
        }
        else if (a[start] + a[end] > key)
            end--;
        else
            start++;
    }
    if (f == 0)
        cout << "No such elements" << endl;
}

int main()
{
    int n;
    cout << "Enter number of elements" << endl;
    cin >> n;
    int a[n];
    cout << "Enter elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int key;
    cout << "Enter key to be found" << endl;
    cin >> key;
    twoSum(a, n, key);
    return 0;
}
