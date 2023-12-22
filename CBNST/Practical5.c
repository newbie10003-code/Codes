#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

#define f(x) cos(x) - 3 * x + 1
#define g(x) (1 + cos(x)) / 2
#define h(x) -1 * sin(x) / 3

int main()
{
    float xo, x1, x, aerror;
    int flag = 0, itr = 0;
    do
    {
        printf("enter the value of xo:\n");
        scanf("%f", &xo);
        if (fabs(h(xo)) < 1)
        {
            flag = 1;
            printf("root Lies between [%f - %f]\n", xo, x1);
        }
        else
        {
            printf("Change the function!!!");
        }
    } while (flag != 1);

    printf("Enter the allowed error\n");
    scanf("%f", &aerror);
    do
    {
        itr++;
        x1 = g(xo);
        printf("%d Iteration, value of x is %f, value of f(%f) is %f\n", itr, x1, x1, g(x1));
        xo = x1;
    } while (fabs(f(x1)) > aerror);
    printf("the root of the given equation is %f after %d iteration\n", x1, itr);
    return 0;
}