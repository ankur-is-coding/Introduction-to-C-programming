#include <stdio.h>

int main()
{
    int num;
    printf("put your number: \n");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("%d is a positive number", num);
    }
}