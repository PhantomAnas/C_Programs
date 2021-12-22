#include<stdio.h>

int main()
{
    int d, x, n;
    n = 0;
    int arrayx[100];
    printf("Enter Decimal Number: ");
    scanf("%d", &d);
    while(d>0)
    {
        x = d%2;
        d = d/2;
        arrayx[n] = x;
        n -= -1;
    }
    n--;
    while(n!=-1)
    {
        printf("%d", arrayx[n]);
        n -= 1;
    }
    return 0;
}