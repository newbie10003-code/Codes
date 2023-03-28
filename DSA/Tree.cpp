char t[10];

#include<bits/stdc++.h>
#define size 10
using namespace std;

int main()
{
    cout << "Enter nodes of the t: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> t[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if (i-1 < 0)
        {
            cout << "Parent of : " << t[i] << " does not exist " << endl;
        }
        else
        {
            cout << "Parent of " << t[i] << " is: " << t[(i-1)/2] << endl;
        }
        
        if (2*i + 1 < size)
        {
            cout << "Left child of " << t[i] << " is: " << t[(2*i) + 1] << endl;
        }
        else
        {
            cout << "Left child of " << t[i] << " does not exist" << endl;
        }
        if (2*i+2 < size)
        {
            cout << "Right child of " << t[i] << " is: " << t[(2*i) + 2] << endl;
        }
        else
        {
            cout << "Right child of " << t[i] << " does not exist" << endl;
        }   
    }
    return 0;
}