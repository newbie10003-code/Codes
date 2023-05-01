#include <bits/stdc++.h>
using namespace std;

int merge(int a[], int start, int mid, int end, int &comparisons)
{
    int inversionCount = 0;
    int n1 = mid - start + 1;
    int n2 = end - mid;
    int L[n1], R[n2];
    int i = 0, j = 0, k = 0;
    for (int i = 0; i < n1; i++)
    {
        L[i] = a[start + i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = a[mid + j + 1];
    }
    i = 0, j = 0, k = start;
    while (i < n1 && j < n2)
    {
        comparisons++;
        if (L[i] < R[j])
            a[k++] = L[i++];
        else
        {
            a[k++] = R[j++];
            inversionCount += mid - i + 1;
        }
    }
    while (i < n1)
    {
        a[k++] = L[i++];
    }
    while (j < n2)
    {
        a[k++] = R[j++];
    }
    return inversionCount;
}

int mergeSort(int a[], int start, int end, int &comparisons)
{
    int inversionCount = 0;
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        inversionCount += mergeSort(a, start, mid, comparisons);
        inversionCount += mergeSort(a, mid + 1, end, comparisons);

        inversionCount += merge(a, start, mid, end, comparisons);
    }
    return inversionCount;
}

int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int comparisons = 0;
        int inversionCount = mergeSort(a, 0, n - 1, comparisons);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        cout << "Inversion count is: " << inversionCount << endl;
        cout << "Comparisons: " << comparisons << endl;
    }
    return 0;
}
