#include<bits/stdc++.h>
using namespace std;
class complex1{
  int a;
  int b;
  public:
  void setdata(int a,int b)
  {
    this->a=a;
    this->b=b;
  }
  void display();
  friend complex1 operator+(complex1,complex1);
  complex1 operator++();
  complex1 operator++(int x);
};
complex1 operator+(complex1 r,complex1 p)
{
    complex1 temp;
    temp.a=r.a+p.a;
    temp.b=r.b+p.b;
    return temp;
}
complex1 complex1::operator++()
{
    this -> a=this -> a+1;
    this -> b=this -> b+1;
    return *this;
}
complex1 complex1::operator++(int x)
{
    this->a=this->a+1;
    this->b=this->b+1;
    return *(this);
}
void complex1::display()
{
    cout<<a<<"+"<<"i"<<b<<endl;
}
int main()
{
    complex1 no1;
    complex1 no2;
    no1.setdata(3,6);
    no2.setdata(7,8);
    no1.display();
    no2.display();
    complex1 no3;
    no3=no1+no2;
    no3.display();
    no1++;
    no1.display();
}