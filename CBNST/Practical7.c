#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<conio.h>
int main()
{
    int i, j , k, n;
    float A[20][20], c, x[10], sum = 0;
    printf("Enter the order of the matrix\n");
    scanf("%d", &n);
    printf("Enter the augmented matrix rowwise\n");
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

    x[n] = A[n][n + 1] / A[n][n];
    for (int i = n - 1; i >= 1; i--)
    {
        sum = 0;
        for (int j = i + 1; j <= n; j++)
        {
            sum += A[i][j] * x[j];
        }
        x[i] = (A[i][n + 1] - sum) / A[i][i]; 
    }
    
    for (int i = 1; i <= n; i++)
    {
        printf("%f\t", x[i]);
    }
    printf("\n");

    return 0;
}