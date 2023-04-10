/*
 Given an unsorted array of integers, design an algorithm and implement it using a program to sort an array of elements by partitioning the array into two subarrays based on a pivot element such that one of the sub array holds values smaller than the pivot element while another sub array holds values greater than the pivot element. Pivot element should be selected randomly from the array. Your program should also find number of comparisons and swaps required for sorting the array. 
*/

#include <bits/stdc++.h>
using namespace std;

// int swaps = 0,comp = 0;
int pivot(int arr[], int s, int e, int &comp, int &swaps)
{
    int pivot = arr[s], count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }

    int pivotIndex = s + count;
    swap(arr[s], arr[pivotIndex]);
    (swaps)++;

    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < pivot)
        {
            i++;
            (comp)++;
        }
        while (arr[j] > pivot)
        {
            j--;
            (comp)++;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
            comp++;
            (swaps)++;
        }
    }
    return pivotIndex;
}
void quickSort(int arr[], int s, int e, int &comp, int &swaps)
{
    if (s >= e)
        return;

    int p = pivot(arr, s, e, comp, swaps);

    // sorting left portion
    quickSort(arr, s, p - 1, comp, swaps);

    // sorting right portion
    quickSort(arr, p + 1, e, comp, swaps);
}

int main()
{
    int n, comp = 0, swaps = 0;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1, comp, swaps);

    cout << "Sorted array is as follows" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Number of comparisons:" << comp << endl;
    cout << "Number of swaps: " << swaps << endl;

    cout << endl;
}