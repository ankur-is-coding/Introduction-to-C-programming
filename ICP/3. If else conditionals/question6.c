#include <stdio.h>

int main()
{
    int num5;

    printf("put any integer number \n");
    scanf("%d", &num5);
    if (num5 % 5 == 0)
    {
        printf("%d is divisible by 5", num5);
    }
    else
    {
        printf("%d is not divisible by 5", num5);
    }
}