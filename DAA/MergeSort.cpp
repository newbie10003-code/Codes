#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& a, int start, int mid, int end)
{
    int n1 = mid - start + 1;
    int n2 = end - mid;
    vector<int> l(n1);
    vector<int> r(n2);
    int i = start, j = 0, k = 0;
    for (i = start; i <= mid; i++)
    {
        l[k++] = a[i];
    }
    k = 0;
    for (i = mid + 1; i <= end; i++)
    {
        r[k++] = a[i];
    }
    i = 0, j = 0, k = start;
    while (i < n1 && j < n2)
    {
        if(l[i] < r[j])
        {
            a[k++] = l[i++];
        }
        else
        {
            a[k++] = r[j++];
        }
    }
    while (i < n1)
    {
        a[k++] = l[i++];
    }
    while (j < n2)
    {
        a[k++] = r[j++];
    }
}

void mergeSort(vector<int>& a, int start, int end)
{
    if(start < end)
    {
        int mid = start + (end - start) / 2;
        mergeSort(a, start, mid);
        mergeSort(a, mid + 1, end);
        merge(a, start, mid, end);
    }
}

int main()
{
    vector<int> a;
    int temp, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }
    mergeSort(a, 0, a.size() - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}