#include<bits/stdc++.h>
using namespace std;

class testing
{
    public:
        int x;
        int y;
        // Postfix Overloading
        void operator++(int){
            // testing temp;
            this -> x = this -> x + 1;
            // return temp;
        }
        // Prefix Overloading
        void operator++(){
            // testing temp;
            this -> x = this -> x + 1;
            // return temp;
        }
};

int main()
{
    testing t;
    t.x = 4;
    // testing t2 = t.operator++(3);
    testing t2;
    t++;
    cout << t.x << endl;
    ++t;
    cout << t.x << endl;
    return 0;
}