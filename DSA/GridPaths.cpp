#include<bits/stdc++.h>
using namespace std;

int grid(int n, int m){
    if (n == 1 or m == 1)
    {
        return 1;
    }
    return grid(n-1, m) + grid(n, m-1);
}

int main()
{
    cout << grid(1, 3) << endl;
    return 0;
}