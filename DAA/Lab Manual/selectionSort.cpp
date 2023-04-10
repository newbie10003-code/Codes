#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& a)
{
    for(int i = 0; i < a.size() - 1; i++)
    {
        int mini = i;
        for(int j = i + 1; j < a.size(); j++)
        {
            if(a[j] < a[mini])
            {
                mini = j;
            }
        }
        if(mini != i)
        {
            swap(a[i], a[mini]);
        }
    }
    for(int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> a = {1, 2, 3, 5, 4};
    selectionSort(a);
    return 0;
}