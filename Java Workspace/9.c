#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int gcd(int a, int b)
{
    if(a == 0)
    {
        return b;
    }
    else if(b == 0)
    {
        return a;
    }
    else
    {
        for(int i = 1; i <= a && i <= b; i++)
        {
            if(a % i == 0 && b % i == 0)
            {
                return i;
            } 
        }
    }
    return 1;
}

int main()
{
    int a, b;
    printf("Enter two numbers : \n");
    scanf("%d %d", &a, &b);
    int result = gcd(a, b);
    printf("GCD of %d and %d is %d\n", a, b, result);   
    return 0;
}