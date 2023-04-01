#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
    int num1, num2, num3, num4;
    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);
    if(num1 > num2)
    {
        printf("%d is greater than %d.\n", num1, num2);
    }
    else if(num1 < num2)
    {
        printf("%d is less than %d.\n", num1, num2);
    }
    else
    {
        printf("Numbers are equal");
    }
    return 0;
}