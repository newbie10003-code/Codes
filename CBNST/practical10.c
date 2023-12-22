#include <stdio.h>
#include <stdlib.h>

int main()
{
    float X[20], Y[20][20];
    int n;
    
    printf("Enter no of data points\n");
    scanf("%d", &n);
    printf("Enter data:\n");
    for (int i = 0; i < n; i++)
    {
        printf("X[%d]=", i);
        scanf("%f", &X[i]);
        printf("Y[%d]=", i);
        scanf("%f", &Y[i][0]);
    }

    /* create Forward Difference Table */
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            Y[j][i] = Y[j + 1][i - 1] - Y[j][i - 1];
        }
    }

    /* Print Forward Difference Table */
    printf("\nFORWARD DIFFERENCE TABLE\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("%0.2f", X[i]);
        for (int j = 0; j < n - i; j++)
        {
            printf("\t%0.2f", Y[i][j]);
        }
        printf("\n");
    }

    // Calculate for new input
    float input, u, unew, factorial = 1, output;
    printf("Enter X:");
    scanf("%f", &input);
    u = (input - X[0]) / (X[1] - X[0]);
    output = Y[0][0];
    unew = u;
    for (int i = 1; i < n; i++)
    {
        output += (unew * Y[0][i]) / factorial;
        factorial *= i + 1;
        unew = unew * (u - i);
    }
    printf("Value at X=%f is %f", input, output);

    return 0;
}