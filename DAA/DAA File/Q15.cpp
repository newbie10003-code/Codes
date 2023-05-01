#include <bits/stdc++.h>
using namespace std;

void intersection(int a1[], int n, int a2[], int m)
{
    int common[m + n] = {0}, k = 0;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a1[i] < a2[j])
        {
            i++;
        }
        else if (a1[i] > a2[j])
        {
            j++;
        }
        else
        {
            common[k++] = a1[i];
            i++;
            j++;
        }
    }
    k = -1;
    while (common[++k] != 0)
    {
        cout << common[k] << " ";
    }
    cout << endl;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a1[n], a2[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> a2[i];
    }
    intersection(a1, n, a2, m);
    return 0;
}
