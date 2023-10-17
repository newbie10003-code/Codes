#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int n;
    printf("Total no of elements in an array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in an array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int countEven = 0, countOdd = 0;
    int pid = fork();
    if (pid == 0)
    {
        printf("Child Process is running\n");
        printf("child Process id :%d\n", getpid());
        printf("Parent Process id:%d\n", getppid());
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
            {
                countOdd += arr[i];
            }
        }
        printf("Odd count:%d\n", countOdd);
        printf("Child Process Completed\n");
    }
    else
    {
        printf("Parent Process is running\n");
        printf("Parent Process id:%d\n", getpid());
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                countEven += arr[i];
            }
        }
        printf("Even count:%d\n", countEven);
        printf("Parent Process Completed\n");
    }
    return 0;
}
