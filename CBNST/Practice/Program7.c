#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
    int n; scanf("%d", &n);
    float A[10][10], X[10], c, sum = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1; j++)
        {
            scanf("%f", &A[i][j]);
        }       
    }
    
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i > j)
            {
                c = A[i][j] / A[j][j];
                for (int k = 1; k <= n + 1; k++)
                {
                    A[i][k] = A[i][k] - c * A[j][k];
                }
            }
        }       
    }

    X[n] = A[n][n + 1] / A[n][n];
    for (int i = n - 1; i >= 1; i--)
    {
        sum = 0;
        for (int j = i + 1; j <= n; j++)
        {
            sum += A[i][j] * X[j];
        }
        X[i] = (A[i][n + 1] - sum) / A[i][i];
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%f\t", X[i + 1]);
    }
    printf("\n");

    return 0;
}