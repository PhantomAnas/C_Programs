#include<stdio.h>

int main()
{
    int in;
    int x; 
    int index=0;
    int num;
    int a[100];
    printf("Input Decimal Number: ");
    scanf("%d", &in);
    while(in>0)
    {
        x = in%16;
        in = in/16;
        a[index] = x;
        index += 1;
    }
    index--;
    while(index!=-1)
    {
        num = a[index];
        switch (num)
    {
        case 10:
            printf("A");
            break;
        case 11:
            printf("B");
            break;
        case 12:
            printf("C");
            break;
        case 13:
            printf("D");
            break;
        case 14:
            printf("E");
            break;
        case 15:
            printf("F");
            break;
        default:
            printf("%d", num);
            break;
    }
        index += -1;
    }


    return 0;
}