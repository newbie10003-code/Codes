//Multiple Inheritance
#include<bits/stdc++.h>
using namespace std;

class animal{

    public:
    int age;
    int weight;
    void speak(){
        cout << "Speaking" << endl;
    }
};

class dog{
    public:
    void bark(){
        cout << "Woof Woof" << endl;
    }
};

class German: public animal, public dog{

};

int main()
{
    German g1;
    g1.animal::speak();
    g1.dog::bark();
    return 0;
}