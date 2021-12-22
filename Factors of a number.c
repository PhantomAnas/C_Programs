#include<stdio.h>

int main(void)
{
    int n, x, y ,z;
    printf("Enter number: ");
    scanf("%d", &n);
    x = n;
    while(x>0)
    {
        if(n%x == 0)
        {
            printf("%d\t", x);
        }
        x -= 1;
    }
    return 0;
}