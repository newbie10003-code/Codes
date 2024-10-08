// SImpson 3/8

#include <stdio.h>
#include <math.h>

float f(float i)
{
    return (1 / (1 + i * i));
}

int main()
{
    int n, c = 1;
    printf("Enter number of intervals:");
    scanf("%d", &n);
    float a, b, h, ans = 0;
    printf("\nEnter range:");
    scanf("%f %f", &a, &b);
    h = (b - a) / n;
    ans = f(a) + f(b);
    for (float i = a + h; i < b; i += h)
    {
        ans += (c % 3 == 0) ? 2 * f(i) : 3 * f(i);
        c++;
    }
    ans = (3 * h / 8) * ans;
    printf("Result is %f", ans);
    return 0;
}