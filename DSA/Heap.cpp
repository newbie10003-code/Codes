#include<bits/stdc++.h>
using namespace std;

class Heap
{
    public:
        int arr[100];
        int size = 0;

        void insert(int val)
        {
            size = size + 1;
            int index = size;
            arr[index] = val;
            while (index > 1)
            {
                int parent = index / 2;
                if(arr[parent] < arr[index])
                {
                    swap(arr[parent], arr[index]);
                    index = parent;
                }
                else
                {
                    return;
                }
            }
        }

        void print()
        {
            for(int i = 1; i <= size; i++)
            {
                cout << arr[i] << " ";
            }
            cout <<  endl;
        }

        void deletion()
        {
            if(size == 0)
            {
                cout << "Nothing to delete" << endl;
                return;
            }
            arr[1] = arr[size];
            size--;
            int i = 1;
            while (i < size)
            {
                int leftIndex = 2 * i;
                int rightIndex = 2 * i + 1;

                if(leftIndex <= size && arr[i] < arr[leftIndex])
                {
                    swap(arr[i], arr[leftIndex]);
                    i = leftIndex;
                }
                else if(rightIndex <= size && arr[i] < arr[rightIndex])
                {
                    swap(arr[i], arr[rightIndex]);
                    i = rightIndex;
                }
                else
                {
                    return;
                }
            }
        }
};

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    if(left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if(right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if(largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    int size = n;
    while (n > 1)
    {
        swap(arr[1], arr[n]);
        n--;
        heapify(arr, n, 1);
    }
    for (int i = 1; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    Heap h;
    h.insert(55);
    h.insert(54);
    h.insert(53);
    h.insert(50);
    h.insert(52);
    // h.print();
    h.deletion();
    // h.print();
 
    // int arr[6] = {-1, 54, 53, 55, 52, 50};
    // for(int i = 5 / 2; i > 0; i--)
    // {
    //     heapify(arr, 5, i);
    // }

    // for(int i = 1; i <= 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    int arr[6] = {-1, 70, 60, 55, 45, 50};
    heapSort(arr, 5);
    return 0;
}