#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& a, int start, int pivot)
{
    int i = start - 1;
    for (int j = 0; j < pivot; j++)
    {
        if(a[j] < a[pivot])
        {
            i++;
            swap(a[j], a[i]);
        }
        i++;
        swap(a[i], a[pivot]);
        return i;
    }
    
}

void quickSort(vector<int>& a, int start, int end)
{
    if(start < end)
    {
        int pivot = partition(a, start, end);
        quickSort(a, start, pivot - 1);
        quickSort(a, pivot + 1, end);
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
    quickSort(a, 0, a.size() - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}