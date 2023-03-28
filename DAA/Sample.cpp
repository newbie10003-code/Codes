#include<bits/stdc++.h>
using namespace std;

void segregateElements(int arr[],int n)
{
    list<int> l;
    auto it = l.begin();
    int j = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            cout << arr[i] << " ";
            l.push_back(arr[i]);
        }
        else
        {
            cout << arr[i] << " ";
            l.push_front(arr[i]);
        }
    }
    cout << endl;
    for(auto i : l)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {1, 2, -1, 3, -4};
    segregateElements(arr, 5);
}