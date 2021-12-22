#include<stdio.h>

int main(void)
{
    int n;
    int result = 1;
    printf("ENTER A NUMBER: ");
    scanf("%d", &n);

    while(n>0)
    {
        result *= n;
        n -=1;
    }
    printf("Factorial is : %d", result);
    return 0;
}