// #include <bits/stdc++.h>
// using namespace std;

// int partition(int a[], int start, int end, int& comparisons, int& swaps)
// {
//     int pivot = a[end];
//     int i = start - 1;
//     for (int j = start; j < end; j++)
//     {
//         comparisons++;
//         if (a[j] < pivot)
//         {
//             i++;
//             swaps++;
//             swap(a[i], a[j]);
//         }
//     }
//     swaps++;
//     swap(a[i + 1], a[end]);
//     return (i + 1);
// }

// int partition_r(int a[], int start, int end, int& comparisons, int& swaps)
// {
//     int random = start + rand() % (end - start);
//     swaps++;
//     swap(a[random], a[end]);
//     return partition(a, start, end, comparisons, swaps);
// }

// void QuickSort(int a[], int l, int r, int& comparisons, int& swaps)
// {
//     if (l < r)
//     {
//         int par = partition_r(a, l, r, comparisons, swaps);
//         QuickSort(a, l, par - 1, comparisons, swaps);
//         QuickSort(a, par + 1, r, comparisons, swaps);
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int comparisons = 0, swaps = 0;
//     QuickSort(a, 0, n - 1, comparisons, swaps);
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl << "Comparisons: " << comparisons << endl;
//     cout << "Swaps: " << swaps << endl;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    auto i[5] = {1, 5, "Newbie", 5, 6};
    cout << i[0] << endl;
    return 0;
}