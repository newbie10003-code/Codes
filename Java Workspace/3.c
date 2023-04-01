#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            sum += i;
        }
    }
    printf("Sum of all even numbers between 1 and %d is %d \n", n, sum);
    return 0;
}