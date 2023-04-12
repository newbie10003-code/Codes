#include<bits/stdc++.h>
using namespace std;

class A
{
    public:
        A()
        {
            cout << "Inside default constructor of class A" << endl;
        }
        A(int x, int y)
        {
            cout << "Inside the parameterised constructor of class A " << x + y << endl; 
        }
        void f()
        {
            cout << "Inside function of class A" << endl;
        }
};

class B : public A
{
    public:
        B(int b)
        {
            cout << "Inside the parameterised constructor of class B: " << b << endl;
        }
};

class C : public B
{
    public:
        C():B(4)
        {
            cout << "Inside the default constructor of class C" << endl;
        }
        C(int x, int y):B(5)
        {
            cout << "Inside the parameterised constructor of class C: " << x + y << endl;
        }
        void f()
        {
            cout << "Inside function of class C" << endl;
        }
};

int main()
{
    A *obj = new C();
    obj -> f();
    return 0;
}