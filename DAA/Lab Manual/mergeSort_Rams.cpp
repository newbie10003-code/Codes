/
 Given an unsorted array of integers, design an algorithm and implement it using a program to sort an array
 of elements by dividing the array into two subarrays and combining these subarrays after sorting each one
 of them. Your program should also find number of comparisons and inversions during sorting the array.
/

#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int start, int mid, int end)
{
    int n1 = mid - start + 1;
    int n2 = end - mid;
    int L[n1], R[n2];
    int i = 0, j = 0, k = 0;
    for( i = 0;i<n1;i++)
    {
        L[i]= a[start+i];
    }
    k=0;
    for(j=0;j<n2;j++)
    {
        R[j]=a[mid+j+1];
    }
    i = 0, j = 0, k = start;
    while (i < n1 && j < n2)
    {
        if (L[i] < R[j])
            a[k++] = L[i++];
        else
            a[k++] = R[j++];
    }
    while (i < n1)
    {
        a[k++] = L[i++];
    }
    while (j < n2)
    {
        a[k++] = R[j++];
    }
}
void mergeSort(int a[], int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        mergeSort(a, start, mid);
        mergeSort(a, mid+1, end);

        merge(a, start, mid, end);
    }
}
int main()
{
    int testCases;
   // cin >> testCases;
    //while (testCases--)
    //{
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        mergeSort(a, 0, n-1);
        for(int i =0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    //}
    return 0;
}