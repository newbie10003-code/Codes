#include<bits/stdc++.h>
using namespace std;

class CircularQueue1
{
    int *a;
    int n;
    int front;
    int rear;

    public:
    CircularQueue1(int size)
    {
        a = new int[size];
        n = size;
        front = -1;
        rear = -1;
    }

    void enqueue(int ele)
    {
        if ((front == 0 && rear == n - 1) || (rear == (front - 1)))
        {
            cout << "Queue Overflow" << endl;
            return;
        }
        if (front == -1)    // First Element to push
        {
            front = 0;
        }
        if (rear == n - 1 && front != 0)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        a[rear] = ele;
        // cout << "inserted" << endl;
        return;
    }

    void dequeue()
    {
        if (front == -1)
        {
            cout << "Empty Queue" << endl;
            return;
        }
        if (front == rear)
        {
            cout << "Deleted Element: " << a[front] << endl;
            front = rear = -1;
            return;
        }
        if (front == n -1)
        {
            cout << "Deleted Element: " << a[front] << endl;
            front = 0;
            return;
        }
        else
        {
            cout << "Deleted Element: " << a[front] << endl;
            front++;
            return;
        }
        
    }

    bool isEmpty()
    {
        if (front == -1 && rear == -1)
        {
            return true;
        }
        return false;
    }

    int seek()
    {
        if (front == -1)
        {
            cout << "Empty CircularQueue1" << endl;
            return -1;
        }
        return a[front];
    }
};

int main()
{
    CircularQueue1 CQ(5);
    CQ.enqueue(10);
    CQ.enqueue(20);
    CQ.enqueue(30);
    CQ.enqueue(40);
    CQ.enqueue(50);
    cout << CQ.seek() << endl;
    CQ.dequeue();
    CQ.enqueue(5);
    cout << CQ.seek() << endl;
    CQ.dequeue();
    cout << CQ.seek() << endl;
    CQ.dequeue();
    cout << CQ.seek() << endl;
    CQ.dequeue();
    cout << CQ.seek() << endl;
    CQ.dequeue();
    cout << CQ.seek() << endl;

    return 0;
}