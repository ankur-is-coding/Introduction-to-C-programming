//Find summation of any 5 integers and the location of the smallest number:
#include <stdio.h>

int main()
{

    int array[5], i, n, sum = 0;
    double avg;

    printf("enter any 5 integers: \n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < 5; i++)
    {
        sum += array[i];
    }

    avg = sum * 0.2;
    printf("%lf is the required average value", avg);
}