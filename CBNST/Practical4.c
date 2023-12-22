#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

float f(float x)
{
    return x * x - 12;
}

float f_x(float x)
{
    return 2 * x;
}

int main()
{
    float xo, x1, x, aerror;
    int flag = 0, itr = 0;
    do
    {
        printf("enter the value of xo and x1 :\n");
        scanf("%f   %f", &xo, &x1);
        if (f(xo) * f(x1) < 0)
        {
            flag = 1;
            printf("root Lies between [%f - %f]\n", xo, x1);
        }
        else
        {
            printf("wrong Interval Try Again\n");
        }
    } while (flag != 1);
    printf("Enter the allowed error\n");
    scanf("%f", &aerror);
    x = (xo + x1) / 2;
    do
    {
        itr++;
        if (f_x(x) == 0)
        {
            printf("Error!\n");
            break;
        }
        x = x - (f(x) / f_x(x));
        printf("%d Iteration, value of x is %f, value of f(%f) is %f\n", itr, x, x, f(x));
        if ((fabs(f(x))) <= aerror)
        {
            flag = 0;
            printf("the root of the given equation is %f after %d iteration\n", x, itr);
        }
    } while (flag != 0);
    return 0;
}