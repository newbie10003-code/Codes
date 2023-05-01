#include<bits/stdc++.h>
using namespace std;

class Point{
    public:

    int x, y;

    Point(){
        cout << "Default Constructor Called" << endl;
    }

    Point(int x1, int y1){
        cout << "Parameterized Constructor Called" << endl;
        this -> x = x1;
        this -> y = y1;
    }

    ~Point(){
        cout << "Destructor Called" << endl;
        cout << x << endl;
        cout << y << endl;
    }
};

int main()
{
    Point p(10, 20);
    // Point p2();
    // cout << p.x << endl;
    // cout << p.y << endl;
    return 0;
}