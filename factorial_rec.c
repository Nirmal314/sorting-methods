#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}
void main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("%d! = %d\n", n, fact(n));
}