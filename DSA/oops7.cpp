//Polymorphism - Existing in many forms

//Two types - Compile-time or Static, Run-time polymorphism or Dynamic

//Compile time polymorphism is of two types - Function, Operator Overloading

//Function Overloading
/*
#include<bits/stdc++.h>
using namespace std;

class A{
  
    public:
    void sayhello(){
        cout << "Hello Nilesh" << endl;
    }

    void sayhello(string name){
        cout << "Hello " << name << endl;
    }

};

int main()
{
    A obj;
    obj.sayhello();
    obj.sayhello("Nilesh");
    return 0;
}*/

//Operator Overloading

#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int a = 0;

    // void setdata(int x){
    //     a = x;
    // }

    // A operator+(A &temp){
    //     A t;
    //     t.a = a - temp.a;  
    //     return t;
    // }

    void operator+(A &temp){
        int value1 = this->a;
        int value2 = temp.a;
        cout << value2 - value1 << endl;
    }

    void operator() (){
        cout << "Main Bracket hun " << this->a << endl;
    }

    void print(){
        cout << this->a << endl;
    }
};

int main()
{
    // A obj1, obj2, result;
    // cin >> obj1.a;
    // cin >> obj2.a;
    // obj1 + obj2;
    // result.print();

    A a;
    A b;
    a.a = 4;
    b.a = 10;
    a + b;
    a();
    return 0;
}