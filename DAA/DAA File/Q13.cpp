#include <bits/stdc++.h>
using namespace std;

void countFreq(char a[], int n)
{
    int alpha[26] = {0};
    for (int i = 0; i < n; i++)
    {
        int index = a[i] - 97;
        alpha[index]++;
    }
    int cnt = 0;
    char ans;
    for (int i = 0; i < n; i++)
    {
        int index = a[i] - 97;
        if (alpha[index] > cnt)
        {
            cnt = alpha[index];
            ans = a[i];
        }
    }
    if (cnt == 0)
        cout << "No duplicates present" << endl;
    else
        cout << ans << "  Count = " << cnt << endl;
}
int main()
{
    int n;
    cin >> n;
    char a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    countFreq(a, n);
}
