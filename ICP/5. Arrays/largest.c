// Take any 5 integers as input and find the largest among them:---
#include <stdio.h>

int main()
{

    int i, n, array[5], large = -1, pos = 0;

    printf("enter any five number to check the largest among them: \n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < 5; i++)
    {
        if (array[i] > large)
        {
            large = array[i];
            pos = i + 1;
        }
    }
    printf("%d is the largest value\n", large);
    printf("%d is the position of the largest number\n", pos);
}