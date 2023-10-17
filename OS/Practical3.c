#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    int pid;
    pid = fork();
    if (pid == 0)
    {
        printf("Inside the child Process\n");
        exit(0);
    }
    else
    {
        int id = wait(NULL);
        printf("Child Process id: %d\n", id);
        printf("Inside the Parent Process\n");
        printf("The child pid=%d\n", pid);
        exit(0);
    }
    return 0;
}
