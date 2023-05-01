#include <bits/stdc++.h>
#include <stdlib.h>
#include <string>
using namespace std;

class Persons
{
public:
    char name[20];
    // string name;
    int age;
    char gender;

    Persons(Persons* a, int n)
    {
        a = (Persons* )malloc(n*sizeof(Persons));
        for (int i = 0; i < n; i++)
        {
            // cout << "Hello1" << endl;
            cin >> a[i].name;
            // getline(cin, a[i].name);
            // a[i].name = "Nilesh";
            // cout << "Hello2" << endl;
            cin >> a[i].age;
            // a[i].age = 20;
            // cout << "Hello3" << endl;
            cin >> a[i].gender;
            // a[i].gender = 'M';
        }
        for (int i = 0; i < n; i++)
        {
            cout << "Name: " << a[i].name << " Age: " << a[i].age << " Gender: " << a[i].gender << endl;
        }
    }
};

int main()
{
    cout << sizeof(Persons) << endl;
    cout << sizeof(string) << endl;
    Persons* a = new Persons(a, 1);
    free(a);
    return 0;
}