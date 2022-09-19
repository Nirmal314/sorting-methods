#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;

    return f;
}
void main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("%d! = %d\n", n, fact(n));
}
 