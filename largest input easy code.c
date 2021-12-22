#include<stdio.h>

int main(void)
{
    int counter = 1;
    int number, largest = 0;
    while(counter<=10)
    {
        printf("Enter Number %d : ", counter);
        scanf("%d", &number);
        if(number>largest)
        {
            largest = number;
        }
        counter -= -1;
    }
    printf("Largest number is %d", largest);
    return 0;
}