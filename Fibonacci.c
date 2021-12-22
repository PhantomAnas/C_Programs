#include<stdio.h>


int main()
{
    int n, z;
    int a=0;
    printf("ENTER A NUMBER: ");
    scanf("%d", &n);
    int fib(int n);
    for (z = 1; z<=n ; z -= -1 )
   {
      printf("%d\n", fib(a));
      a -= -1; 
   }
    return 0;
}
int fib(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return fib(n-1) + fib(n-2);
    }
}
