#include <stdio.h>

int main()
{

    int array[5], n, i;

    printf("enter number of elements in the array:\n");
    scanf("%d", &n);

    printf("please enter %d integers\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("displaying integers: \n");

    for (i = 0; i < n; i++)
    {
        printf("%d \n", array[i]);
    }
}