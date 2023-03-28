#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
        int size;
        int top;
        char* arr;
    
    Stack(int size){
        this -> size = size;
        top = -1;
        arr = new char[size];
    }

    void push(char element){
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

    char pop(){
        if (top == -1)
        {
            // cout << "Stack is Empty" << endl;
            return '\0';
        }
        return arr[top--];
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

int main()
{
    string s, ans;
    getline(cin, s);
    int i = 0;char ch;
    Stack rev(s.size());
    while (s[i] != '\0')
    {
        rev.push(s[i]);
        i++;
    }
    while ((ch = rev.pop()) != '\0')
    {
        ans.push_back(ch);
    }
    cout << "Ans: " << ans << endl;
    return 0;
}