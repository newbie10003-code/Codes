// #include<bits/stdc++.h>
// using namespace std;

// void segregateElements(int arr[],int n)
// {
//     list<int> l;
//     auto it = l.begin();
//     int j = 0;
//     for(int i = 0; i < n; i++)
//     {
//         if(arr[i] < 0)
//         {
//             cout << arr[i] << " ";
//             l.push_back(arr[i]);
//         }
//         else
//         {
//             cout << arr[i] << " ";
//             l.push_front(arr[i]);
//         }
//     }
//     cout << endl;
//     for(auto i : l)
//     {
//         cout << i << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int arr[5] = {1, 2, -1, 3, -4};
//     segregateElements(arr, 5);
// }

#include<bits/stdc++.h>
using namespace std;

unsigned int dataSize, numCycles;
double baseValue;
std::clock_t start;
double duration;
FILE *dataFile = NULL;
char filename[100];
sprintf(filename, "CyclesData.csv");
dataFile = fopen(filename, "w");
// N-Squared
unsigned int iteratorA, iteratorB;
for (numCycles = 1; numCycles < 23; numCycles++)
{
    start = std::clock();
    dataSize = numCycles * 1000;
    // ---------- Algorithm -------------------
    for (iteratorA = 0; iteratorA < dataSize; iteratorA++)
    for (iteratorB = 0; iteratorB < dataSize; iteratorB++)
    baseValue = (double)(iteratorA * iteratorB * rand());
    // ----------------------------------------
    duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
    fprintf(dataFile, "%u,%u,%lf,seconds\n", numCycles, dataSize, duration);
    printf("%u\t%u\t%lf seconds\n", numCycles, dataSize, duration);
}
fclose(dataFile);