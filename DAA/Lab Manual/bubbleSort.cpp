#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& a)
{
    for(int i = 0; i < a.size() - 1; i++)
    {
        for(int j = i + 1; j < a.size(); j++)
        {
            if(a[j] < a[i])
            {
                swap(a[i], a[j]);
            }
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
    vector<int> a = {5,10,1,6,4,20};
    bubbleSort(a);
    return 0;
}