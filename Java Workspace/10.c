#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int fibonacci(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int result = fibonacci(n);
    printf("The %dth term in the fibonacci sequence is %d\n", n, result);
    return 0;
}