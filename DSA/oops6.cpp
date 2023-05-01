//Inheritance Ambiguity
#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void speak(){
        cout << "Speaking A" << endl;
    }
};

class B{
    public:
    void speak(){
        cout << "Speaking B" << endl;
    }
};

class C: public A, public B{
    public:
};

int main()
{
    C c;
    c.A::speak();
    c.B::speak();
    return 0;
}