// First Come First Serve Algorithm

// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>

// int main()
// {
//     int n, bt[20], wt[20], tat[20], avg_wt = 0, avg_tat = 0;
//     printf("Enter number of processes\n");
//     scanf("%d", &n);
//     printf("Enter Burst Time of each process\n");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &bt[i]);
//     }

//     wt[0] = 0;
//     for (int i = 1; i < n; i++)
//     {
//         wt[i] = wt[i - 1] + bt[i - 1];
//     }

//     printf("Process\tBurst Time\tWaiting Time\tTurn Around Time\n");
//     for (int i = 0; i < n; i++)
//     {
//         tat[i] = bt[i] + wt[i];
//         avg_wt += wt[i];
//         avg_tat += tat[i];
//         printf("P[%d] \t %d \t\t %d \t\t %d \n", i + 1, bt[i], wt[i], tat[i]);
//     }

//     avg_wt /= n;
//     avg_tat /= n;
//     printf("Average Waiting Time = %d\n", avg_wt);
//     printf("Average Turn Around Time = %d\n", avg_tat);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct Process
{
    int at, bt, wt, ct, tat;
} Process;

int comp(const void *a, const void *b)
{
    Process *p1 = (Process *)a;
    Process *p2 = (Process *)b;
    return (p1->at - p2->at);
}

int main()
{
    int n;
    scanf("%d", &n);
    Process p[n];
    for (int i = 0; i < n; i++)
        scanf("%d %d", &p[i].at, &p[i].bt);
    qsort(p, n, sizeof(Process), comp);
    int time = 0;
    double avg_tat = 0, avg_wt = 0;
    p[0].wt = 0;
    for (int i = 0; i < n; i++)
    {
        p[i].wt = time - p[i].at;
        time += p[i].bt;
        p[i].ct = time;
        p[i].tat = p[i].bt + p[i].wt;
        avg_tat += p[i].tat;
        avg_wt += p[i].wt;
    }

    printf("PID\tAT\tBT\tWT\tCT\tTAT\n");
    for (int i = 0; i < n; i++)
        printf("%d\t%d\t%d\t%d\t%d\t%d\n", i, p[i].at, p[i].bt, p[i].wt, p[i].ct, p[i].tat);
    printf("Average Turnaroud time: %lf units\nAverage Waiting time: %lf units\n", avg_tat / n, avg_wt / n);
    return 0;
}