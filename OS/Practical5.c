#include <stdio.h>
#include <stdlib.h>

struct PCB
{
    int pid, arr, brst, ct, wt, tat, isCompleted;
};

void sort(struct PCB p[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (p[j].brst > p[j + 1].brst)
            {
                struct PCB temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    float aTat = 0.0, aWt = 0.0;
    printf("Enter the no. of Process: ");
    scanf("%d", &n);
    printf("Enter the PID: ");
    struct PCB *p = malloc(n * sizeof(struct PCB));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p[i].pid);
    }
    printf("Enter the Arrival Time: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p[i].arr);
    }
    printf("Enter the Burst Time: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p[i].brst);
        p[i].isCompleted = 0;
    }
    sort(p, n);
    int currTime = 0;
    int countComplete = 0;
    while (countComplete < n)
    {
        int sji = -1;
        for (int i = 0; i < n; i++)
        {
            if (!p[i].isCompleted && p[i].arr <= currTime)
            {
                if (sji == -1 || p[i].brst < p[sji].brst)
                    sji = i;
            }
        }
        if (sji == -1)
            currTime++;
        else
        {
            struct PCB *process = &p[sji];
            process->ct = currTime + process->brst;
            process->tat = process->ct - process->arr;
            process->wt = process->tat - process->brst;
            aTat = aTat + process->tat;
            aWt = aWt + process->wt;
            currTime = process->ct;
            process->isCompleted = 1;
            countComplete++;
        }
    }
    printf("PID\t\t AT\t\t BT\t\t CT\t\t TAT\t\t WT\t\t\n");
    printf("------------------------------------------------------------------------------------------\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t\t %d\t\t %d\t\t %d\t\t %d\t\t %d\n", p[i].pid, p[i].arr, p[i].brst, p[i].ct,
               p[i].tat, p[i].wt);
    }
    printf("\nAverage Turn Around Time is: %f", aTat / n);
    printf("\nAverage Waiting Time is: %f", aWt / n);
    free(p);
    return 0;
}