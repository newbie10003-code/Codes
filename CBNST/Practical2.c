#include <stdio.h>
#include <math.h>

float f2(float a)
{
    return (a + (log10(a) - 1.2));
}

float f(float a)
{
    return (a * a * a - 5 * a + 1);
}

int main()
{
    float x, x1, x2, allerr;
    int flag = 0, itr = 0;
    do
    {
        printf("Enter the values of x1 and x2\n");
        scanf("%f %f", &x1, &x2);

        if (f(x1) * f(x2) < 0)
        {
            flag = 1;
            printf("\nThe roots lie between %f and %f", x1, x2);
        }
        else
        {
            printf("\n Wrong intervals,try again");
        }

    } while (flag != 1);

    printf("\nEnter the allowed error:");
    scanf("%f", &allerr);

    do
    {
        itr++;
        x = (x1 + x2) / 2;
        printf("\n%d iteration , value of x if %f, value of f(%f) is %f", itr, x, x, f(x));
        if (fabs(f(x)) <= allerr)
        {
            flag = 0;
            printf("\nThe root the equation is %f after %d iteration", x, itr);
        }
        else if (f(x) * f(x1) < 0)
            x2 = x;
        else
            x1 = x;

    } while (flag != 0);
    return 0;
}