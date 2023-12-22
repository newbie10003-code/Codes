#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

float allErr = 0.0001;

void calcFunc(float mat[][100], float x, float y, float z)
{
    float x1 = (mat[0][3] - y * mat[0][1] - z * mat[0][2]) / mat[0][0];
    float y1 = (mat[1][3] - z * mat[1][2] - x * mat[1][0]) / mat[1][1];
    float z1 = (mat[2][3] - x * mat[2][0] - y * mat[2][1]) / mat[2][2];

    // printf("%f\t\t%0.4f\t%0.4f\t%0.4f\n", x1, y1, z1);

    float e1 = fabs(x - x1);
    float e2 = fabs(y - y1);
    float e3 = fabs(z - z1);
    
    if (e1 <= allErr && e2 <= allErr && e3 <= allErr)
    {
        printf("The ans is: x = %f, y = %f, z = %f", x1, y1, z1);
        return;
    }
    calcFunc(mat, x1, y1, z1);
}

int main()
{
    int n; scanf("%d", &n);
    float mat[100][100];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            scanf("%f", &mat[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        float diag = mat[i][i];
        int maxRow = i;

        for (int j = i + 1; j < n; j++)
        {
            if (fabs(mat[j][i]) > fabs(mat[maxRow][i]))
            {
                maxRow = j;
            }
        }
        
        if (maxRow != i)
        {
            for (int k = 0; k < n + 1; k++)
            {
                float temp = mat[maxRow][k];
                mat[maxRow][k] = mat[i][k];
                mat[i][k] = temp;
            }
        }
    }
    
    printf("Modified Matrix (Diagonal Dominance):\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            printf("%.2f\t", mat[i][j]);
        }
        printf("\n");
    }

    calcFunc(mat, 0, 0, 0);

    return 0;
}