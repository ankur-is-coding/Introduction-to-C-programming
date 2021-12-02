#include <stdio.h>

int main()
{

    int num1, num2;
    printf("put any two integer number \n");
    scanf("%d%d", &num1, &num2);

    if (num1 > num2)
    {
        printf("%d is greater than %d \n", num1, num2);
    }
    else
    {
        printf("%d is less than %d", num1, num2);
    }
}