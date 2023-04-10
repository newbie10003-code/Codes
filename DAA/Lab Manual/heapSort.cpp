#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int> &a, int n, int i)
{
    int small = i;
    int left = 2 * i + 1, right = 2 * i + 2;
    if (left <= n && a[small] < a[left])
    {
        small = left;
    }
    if (right <= n && a[small] < a[right])
    {
        small = right;
    }
    if (small != i)
    {
        swap(a[small], a[i]);
        heapify(a, n, small);
    }
}

void heapSort(vector<int> &a)
{
    int n = a.size() - 1;
    for (int i = n / 2; i >= 0; i--)
    {
        heapify(a, n, i);
    }
    for(int i = 0; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    while (n >= 0)
    {
        swap(a[n], a[0]);
        n--;
        heapify(a, n, 0);
    }
}

int main()
{
    vector<int> a = {1, 2, 3, 5, 4};
    heapSort(a);
    for(int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}