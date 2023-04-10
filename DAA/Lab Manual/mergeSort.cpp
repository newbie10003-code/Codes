#include <bits/stdc++.h>
using namespace std;

int merge(vector<int> &a, int s, int mid, int e)
{
    int l1 = mid - s + 1;
    int l2 = e - mid;
    int left[l1], right[l2];
    int i = 0;
    while (i < l1)
    {
        left[i] = a[s + i];
        i++;
    }
    i = 0;
    while (i < l2)
    {
        right[i] = a[mid + i + 1];
        i++;
    }
    i = 0;
    int j = 0, k = s;
    int count = 0;
    while (i < l1 && j < l2)
    {
        if (left[i] > right[j])
        {
            a[k++] = right[j++];
            count += (l1 - i);
        }
        else
        {
            a[k++] = left[i++];
        }
    }
    while (i < l1)
    {
        a[k++] = left[i++];
    }
    while (j < l2)
    {
        a[k++] = right[j++];
    }
    return count;
}

int MSort(vector<int> &a, int s, int e)
{
    int count = 0;
    if (s < e)
    {
        int mid = s + (e - s) / 2;
        count += MSort(a, s, mid);
        count += MSort(a, mid + 1, e);
        count += merge(a, s, mid, e);
    }
    return count;
}

int main()
{
    vector<int> a = {1, 2, 3, 5, 4};
    cout << MSort(a, 0, 4) << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}