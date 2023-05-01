#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
        int size;
        int top;
        int* arr;
    
    Stack(int size){
        this -> size = size;
        top = -1;
        arr = new int[size];
    }

    void push(int element){
        if (top == size - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        else
        {
            top++;
            arr[top] = element;
        }
        return;
    }

    void pop(){
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
            return;
        }
        top--;
        return;
    }

    int peek(){
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty(){
        if (top == -1)
        {
            return true;
        }
        return false;
    }
};

int main(){
    return 0;
}