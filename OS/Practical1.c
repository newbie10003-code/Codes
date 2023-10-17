#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
    fork();
    printf("Hello World by Nilesh\n");
    printf("Parent Process ID is :%d\n", getpid());
    return 0;
}
