#include<bits/stdc++.h>
using namespace std;

void display(int* p, int n){
    for (int i = n - 1; i >= 0; i--)
    {
        cout << (p+i) << " " << *(p+i) << endl;
    } 
}

int main()
{
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int* p = &a[0];
    display(p, n);
    return 0;
}