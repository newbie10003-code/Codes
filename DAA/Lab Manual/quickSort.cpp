#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& a, int start, int end)
{
    int pivot = a[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if(a[i] < pivot)
        {
            count++;
        }
    }
    int pivotIndex = start + count;

    swap(a[pivotIndex], a[start]); 
    int i = start, j = end;
    while (i <= j)
    {
        if(a[i] > pivot && a[j] < pivot)
        {
            swap(a[i], a[j]);
        }
        i++;
        j--;
    }
    return start + count;
}

void quickSort(vector<int>& a, int start, int end)
{
    if(start < end)
    {
        int p = partition(a, start, end);
        quickSort(a, start, p - 1);
        quickSort(a, p + 1, end);
    }
}

int main()
{
    vector<int> a = {1, 2, 3, 5, 4};
    quickSort(a, 0, a.size() - 1);
    for(int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}