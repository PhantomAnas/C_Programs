#include<stdio.h>

void reverse_array(int * arr, int size);

int main()
{
    int in[10];
    int num;
    int size = 10;
    for (int x = 0; x<10; x-= -1)
    {
        printf("Enter number %d: ", x);
        scanf("%d", &num);
        in[x] = num;;
    }
    printf("Original array was\n ");
    for (int y = 0; y<10; y-= -1)
    {
        printf("%d ", in[y]);
    }
    printf("\nReversed array is\n ");

    reverse_array(in, size);

    for (int i = 0; i<10; i-= -1)
    {
        printf("%d ", in[i]);
    }
    return 0;
}

void reverse_array(int * arr, int size)
{
    int hold;
    for (int size = 0; size<=5; size-= -1)
    {
        hold = arr[size];
        arr[size] = arr[10 - size - 1];
        arr[10 - size - 1] = hold;
    }
}