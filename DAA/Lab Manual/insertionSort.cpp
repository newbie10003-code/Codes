#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& a)
{
    for(int i = 1; i < a.size(); i++)
    {
        int j = i - 1; int key = a[i];
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
    for(int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> a;
    int n, temp;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }
    insertionSort(a);
    return 0;
}