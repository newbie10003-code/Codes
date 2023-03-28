#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int s, int e){
    int mid = (s + e) / 2;
    
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // Copy values into first array
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = a[k++];
    }
    // Copy values into second array
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = a[k++];
    }
    // Merge 2 sorted arrays
    // K denotes main array index
    int index1 = 0, index2 = 0;
    k = s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            a[k] = first[index1];
            index1++; k++;
        }
        else if (first[index1] > second[index2])
        {
            a[k] = second[index2];
            index2++; k++;
        }
        else
        {
            a[k] = first[index1];
            k++; index1++;
            a[k] = second[index2];
            k++; index2++;
        }        
    }
    while (index1 < len1)
    {
        a[k] = first[index1];
        k++; index1++;
    }
    while (index2 < len2)
    {
        a[k] = second[index2];
        k++; index2++;
    }
    delete []first;
    delete []second;
}

void mergeSort(int a[], int s, int e){
    if (s >= e)
    {
        return;
    }

    int mid = (s + e) / 2;
    // Left Part sort karna hai
    mergeSort(a, s, mid);

    // Right Part sort karna hai
    mergeSort(a, mid + 1, e);

    // Merge two sorted arrays
    merge(a, s, e);
}

int main()
{
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Unsorted Array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    mergeSort(a, 0, n-1);
    cout << "Sorted Array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}