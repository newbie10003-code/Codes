//Run-time Polymorphism or Dynamic Polymorphism

#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    void speak(){
        cout << "Speaking" << endl;
    }

};

class dog: public Animal{
    public:
    void speak(){
        cout << "Barking" << endl;
    }
};

int main()
{
    Animal a;
    a.speak();
    dog d;
    d.speak();
    return 0;
}