#include <stdio.h>
#include <stdlib.h>
typedef struct PCB
{
    int id, at, bt;
} p;
int main()
{
    int n;
    float avg_tat = 0, avg_wt = 0;
    printf("enter no processes \n");
    scanf("%d", &n);
    int ct[n], tat[n], wt[n];
    p temp;
    p arr[n];
    printf("enter arrival timer and burst time \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &arr[i].at, &arr[i].bt);
        arr[i].id = i + 1;
    }

    int minat = arr[0].at, index = 0, minbt = arr[0].bt;
    for (int i = 1; i < n; i++)
    {
        if (minat > arr[i].at)
        {
            minat = arr[i].at;
            minbt = arr[i].bt;
            index = i;
        }
        else if (minat == arr[i].at && minbt > arr[i].bt)
        {
            minbt = arr[i].bt;
            index = i;
        }
    }
    temp = arr[0];
    arr[0] = arr[index];
    arr[index] = temp;

    int minti = arr[0].at + arr[0].bt;
    for (int i = 1; i < n; i++)
    {
        int index = i;
        int minbts = 1000;
        for (int j = i ; j < n; j++)
        {
            if (arr[j].at <= minti)
            {
                if (arr[j].bt < minbts)
                {
                    index = j;
                    minbts=arr[i].bt;
                }
                else if (arr[j].bt == minbts && arr[j].at < arr[index].at)
                    index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
        minti = minti + arr[i].bt;
    }

    int time = 0;
    for (int i = 0; i < n; i++)
    {
        if (time < arr[i].at)
            time = arr[i].at;
        time += arr[i].bt;
        ct[i] = time;
        tat[i] = ct[i] - arr[i].at;
        wt[i] = tat[i] - arr[i].bt;
    }
    printf("P  AT  BT  CT  TAT  WT \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  %d   %d  %d   %d   %d \n", arr[i].id, arr[i].at, arr[i].bt, ct[i], tat[i], wt[i]);
        avg_tat += tat[i];
        avg_wt += wt[i];
    }
    avg_tat = avg_tat / n;
    avg_wt = avg_wt / n;
    printf("%f \n %f", avg_tat, avg_wt);
}
// 1 2
// 4 3
// 1 4
// 2 4
// 3 6