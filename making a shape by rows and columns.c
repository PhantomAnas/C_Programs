#include<stdio.h>

int main(void)
{
    int rows, col;
    int countstart = 0;
    int countend = 0;
    int counter1 = 0;
    int counter2 = 0;
    printf("Enter Number of rows: ");
    scanf("%d", &rows);
    printf("Enter Number of Columns: ");
    scanf("%d", &col);
    rows = rows - 2;

    while(countstart<col)
    {
        printf("*");
        countstart -= -1;
    }
    printf("\n");
    while(counter1<rows)
    {
        counter2 = 0;
        while(counter2<col)
        {
            if(counter2 == 0 || counter2 == (rows+1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            counter2 -= -1;
        }
        printf("\n");
        counter1 -= -1;
    }
    while(countend<col)
    {
        printf("*");
        countend -= -1;
    }
    return 0;
}