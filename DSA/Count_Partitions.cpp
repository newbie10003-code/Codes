#include<bits/stdc++.h>
using namespace std;

int count_partitions(int n, int m){
    if (n == 0)
    {
        return 1;
    }
    else if(m == 0 || n < 0){
        return 0;
    }
    return count_partitions(n-m, m) + count_partitions(n, m-1);
}

int main()
{
    cout << count_partitions(9, 5) << endl;
    return 0;
}