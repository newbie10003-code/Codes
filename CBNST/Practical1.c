#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
    double absErr, actVal = 1 / 3, relErr, perErr, calcVal;
    scanf("%lf %lf", &actVal, &calcVal);
    absErr = fabs(actVal - calcVal);
    relErr = absErr / actVal;
    perErr = relErr * 100;
    printf("Absolute Error: %lf\n", absErr);
    printf("Relative Error: %lf\n", relErr);
    printf("Percentage Error: %lf\n", perErr);
    return 0;
}