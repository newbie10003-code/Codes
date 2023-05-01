#include <bits/stdc++.h>
using namespace std;

void heapifyMax(int a[], int n, int i)
{
    int max = i;
    int leftChild = 2 * i + 1;
    int rightChild = 2 * i + 2;
    if (leftChild < n && a[leftChild] > a[max])
        max = leftChild;
    if (rightChild < n && a[rightChild] > a[max])
        max = rightChild;
    if (max != i)
    {
        swap(a[i], a[max]);
        heapifyMax(a, n, max);
    }
}

void heapifyMin(int a[], int n, int i)
{
    int min = i;
    int leftChild = 2 * i + 1;
    int rightChild = 2 * i + 2;
    if (leftChild < n && a[leftChild] < a[min])
        min = leftChild;
    if (rightChild < n && a[rightChild] < a[min])
        min = rightChild;
    if (min != i)
    {
        swap(a[i], a[min]);
        heapifyMin(a, n, min);
    }
}

int main()
{
    // Size of the array
    int n;
    cout << "Enter number of elements" << endl;
    cin >> n;
    int a[n];
    cout << "Enter elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // Copying the array
    int temp[n];
    for (int i = 0; i < n; i++)

    {
        temp[i] = a[i];
    }
    // Entering key
    int k, ch;
    cout << "Enter value of k " << endl;
    cin >> k;
    k--;
    // Entering choice for kth largest and smallest
    cout << "Enter 0 to get kth largest and 1 to get kth smallest." << endl;
    cin >> ch;
    // Kth smallest
    if (ch == 0)
    {
        for (int i = (n / 2); i >= 0; i--)
        {
            heapifyMax(a, n, i);
        }
        while (k--)
        {
            swap(a[0], a[n - 1]);
            n--;
            heapifyMax(a, n, 0);
        }
        cout << a[0] << endl;
    }
    // Kth Largest
    else
    {
        for (int i = (n / 2); i >= 0; i--)
        {
            heapifyMin(temp, n, i);
        }
        while (k--)
        {
            swap(temp[0], temp[n - 1]);
            n--;
            heapifyMin(temp, n, 0);
        }
        cout << temp[0] << endl;
    }
    return 0;
}
