//Single Inheritance
#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    string name;
    int age;
    int height;
    public:
    int getage(){
        return this->age;
    }
    void setage(int n){
        this->age = n;
    }
};

class male:public student{
    public:
    void setage(int n){
        this->age = n;
    }
    int getage(){
        return this->age;
    }
};

class female:public student{
    public:
    void setage(int n){
        this->age = n;
    }
    int getage(){
        return this->age;
    }
};

int main()
{
    student s;
    cout << endl << s.getage() << endl;
    male m1;
    m1.setage(80);
    cout << m1.getage() << endl;
    cout << endl;
    s.setage(19);
    cout << s.getage() << endl;
    female f1;
    f1.setage(18);
    cout << f1.getage() << endl;
    cout << endl;
    return 0;
}