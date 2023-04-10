#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void maxHeapify(int arr[], int i, int n)
{
    int largest = i;
    int leftChild = 2 * i;
    int rightChild = 2 * i + 1;
    if (leftChild <= n && arr[leftChild] > arr[largest])
    {
        largest = leftChild;
    }
    if (rightChild <= n && arr[rightChild] > arr[largest])
    {
        largest = rightChild;
    }
    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        maxHeapify(arr, largest, n);
    }
}

void heapSort(int arr[], int size, int i)
{
    while (size > 1)
    {
        swap(&arr[1], &arr[size]);
        size--;
        maxHeapify(arr, 1,size);
    }
}

int main()
{
    int arr[] = {-1, 12, 11, 13, 5, 6, 7};
    int n = 6;
    for (int i = n / 2; i > 0; i--)
    {
        maxHeapify(arr, i, n);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    heapSort(arr, n, 1);

    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}