// Take 5 integers as input and find the location of the largest:---
#include <stdio.h>

int main()
{

    int i, n, array[5], small = 1000, pos = 0;

    printf("enter any five number to check the smallest among them: \n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < 5; i++)
    {
        if (array[i] < small)
        {
            small = array[i];
            pos = i + 1;
        }
    }
    printf("%d is the smallest value\n", small);
    printf("%d is the position of the smallest number\n", pos);
}