#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
    float x[10], y[10], xp, yp = 0;
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%f %f", &x[i], &y[i]);
    }

    scanf("%f", &xp);
    for (int i = 0; i < n; i++)
    {
        float p = 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
               p = p * ((xp - x[j]) / (x[i] - x[j])); 
            }
        }
        yp += (p * y[i]);
    }
    
    printf("%.3f", yp);

    return 0;
}