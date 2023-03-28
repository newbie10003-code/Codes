#include<bits/stdc++.h>
using namespace std;

class Base {
   public:
    virtual void print() {
        cout << "Base class code" << endl;
    }
};

class Derived : public Base {
   public:
    void print() override {
        cout << "Derived Class Code" << endl;
    }
};

int main() 
{
    Derived derived1;
    Base* base1 = &derived1;
    // Base base1;
    base1->print();

    return 0;
}