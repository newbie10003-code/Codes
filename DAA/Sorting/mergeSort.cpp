// #include<bits/stdc++.h>
// using namespace std;

// void merge(vector<int>& a, int start, int mid, int end)
// {
//     int n1 = mid - start + 1;
//     int n2 = end - mid;
//     vector<int> l(n1);
//     vector<int> r(n2);
//     int i = start, j = 0, k = 0;
//     for (i = start; i <= mid; i++)
//     {
//         l[k++] = a[i];
//     }
//     k = 0;
//     for (i = mid + 1; i <= end; i++)
//     {
//         r[k++] = a[i];
//     }
//     i = 0, j = 0, k = start;
//     while (i < n1 && j < n2)
//     {
//         if(l[i] < r[j])
//         {
//             a[k++] = l[i++];
//         }
//         else
//         {
//             a[k++] = r[j++];
//         }
//     }
//     while (i < n1)
//     {
//         a[k++] = l[i++];
//     }
//     while (j < n2)
//     {
//         a[k++] = r[j++];
//     }
// }

// void mergeSort(vector<int>& a, int start, int end)
// {
//     if(start < end)
//     {
//         int mid = start + (end - start) / 2;
//         mergeSort(a, start, mid);
//         mergeSort(a, mid + 1, end);
//         merge(a, start, mid, end);
//     }
// }

// int main()
// {
//     vector<int> a;
//     int temp, n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> temp;
//         a.push_back(temp);
//     }
//     mergeSort(a, 0, a.size() - 1);
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }
//
// #include <iostream>
// using namespace std;
//
// void mergeSortedArrays(int arr[], int start, int end, int mid)
// {
//     int indx1 = (mid - start + 1), indx2 = (end - mid);
//     int left[indx1], right[indx2];
//     int s = 0;
//     for (int i = start; i <= mid; i++)
//     {
//         left[s++] = arr[i];
//     }
//     s = 0;
//     for (int i = mid + 1; i <= end; i++)
//     {
//         right[s++] = arr[i];
//     }

//     int k = start;
//     int i = 0, j = 0;
//     while (i < indx1 && j < indx2)
//     {
//         if (left[i] < right[j])
//         {
//             arr[k++] = left[i++];
//         }

//         else
//         {
//             arr[k++] = right[j++];
//         }
//     }
//     while (i < indx1)
//     {
//         arr[k++] = left[i++];
//     }
//     while (j < indx2)
//     {
//         arr[k++] = right[j++];
//     }
// }

// void mergeSort(int arr[], int start, int end)
// {
//     if (start < end)
//     {
//         int mid = start + (end - start) / 2;
//         mergeSort(arr, start, mid);
//         mergeSort(arr, mid + 1, end);
//         mergeSortedArrays(arr, start, end, mid);
//     }
// }

// int main()
// {
//     int arr[] = {9, 8, 5, 3, 1, 6, 4, 3, 7};
// int n = 9;
// mergeSort(arr, 0, n - 1);
// for (int i = 0; i < n; i++)
// {
// cout << arr[i] << " ";
// }
// cout << endl;
//     // return 0;
// }

// Merge Sort with inversion count

#include <bits/stdc++.h>
using namespace std;

int mergeSortedArrays(int arr[], int start, int end, int mid)
{
    // Indices and sizes
    int indx1 = (mid - start + 1), indx2 = (end - mid);
    int left[indx1], right[indx2];
    int s = 0, count = 0;
    // Dividing into two arrays
    for (int i = start; i <= mid; i++)
    {
        left[s++] = arr[i];
    }
    s = 0;
    for (int i = mid + 1; i <= end; i++)
    {
        right[s++] = arr[i];
    }
    // Merging
    int k = start;
    int i = 0, j = 0;
    while (i < indx1 && j < indx2)
    {
        if (left[i] <= right[j])
        {
            arr[k++] = left[i++];
        }
        else
        {
            arr[k++] = right[j++];
            count += (mid - i + 1);
        }
    }
    while (i < indx1)
    {
        arr[k++] = left[i++];
    }
    while (j < indx2)
    {
        arr[k++] = right[j++];
    }
    return count;
}

int mergeSort(int arr[], int start, int end)
{
    int mid, count = 0;
    if (start < end)
    {
        mid = start + (end - start) / 2;
        count += mergeSort(arr, start, mid);
        count += mergeSort(arr, mid + 1, end);
        count += mergeSortedArrays(arr, start, end, mid);
    }
    return count;
}

int main()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int arr2[] = {1, 20, 6, 4, 5};
    int inv_count = mergeSort(arr2, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl << inv_count << endl;
    return 0;
}
