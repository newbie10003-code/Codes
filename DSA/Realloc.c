#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int* a = (int* )calloc(2, sizeof(int));
    int temp = 0;
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", a+i);
        printf("%d ", *(a+i));
        temp++;
    }printf("\n");
    printf("Size: %d\n", temp);
    for (int i = 0; i < 2; i++)
    {
        printf("%d ", *(a+i));
    }    
    return 0;
}