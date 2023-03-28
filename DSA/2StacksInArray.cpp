#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
        int* arr;
        int top1;
        int top2;
        int size;
    
    Stack(int size){
        this -> size = size;
        top1 = -1;
        top2 = size;
        arr = new int[size];
    }

    void push1(int element){
        if (top1 == size - 1 || top1 + 1 == top2)
        {
            cout << "Stack 1 overflow" << endl;
            return;
        }
        top1++;
        arr[top1] = element;
    }

    void push2(int element){
        if (top2 == 0 || top2 == top1 + 1)
        {
            cout << "Stack 2 overflow" << endl;
            return;
        }
        top2--;
        arr[top2] = element;
    }

    void pop1(){
        if (top1 == -1)
        {
            cout << "Stack 1 Underflow" << endl;
            return;
        }
        top1--;
        return;
    }

    void pop2(){
        if (top2 == size)
        {
            cout << "Stack 2 Underflow" << endl;
            return;
        }
        top2++;
        return;
    }

    int peek1(){
        if (top1 == -1)
        {
            cout << "Stack 1 is Empty" << endl;
            return -1;
        }
        return arr[top1];
    }

    int peek2(){
        if (top2 == size)
        {
            cout << "Stack 2 is Empty" << endl;
            return -1;
        }
        return arr[top2];
    }

    bool isEmpty1(){
        if (top1 == -1)
        {
            return true;
        }
        return false;
    }

    bool isEmpty2(){
        if (top2 == -1)
        {
            return true;
        }
        return false;
    }
};

int main()
{

    Stack s(5);
    s.push1(10);
    s.push2(20);
    s.push1(30);
    s.push2(40);
    s.push1(50);
    s.push1(1000);
    cout << "Top Element in Stack1: " << s.peek1() << endl;
    cout << "Top Element in Stack2: " << s.peek2() << endl;
    return 0;
}