#include <stdio.h>

int main()
{

    int a, b, c;

    printf("put any three numbers: \n");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("%d is the greatest number.\n", a);
    }
    else if (b > c && b > a)
    {
        printf("%d is the greatest", b);
    }
    else
    {
        printf("%d is the greatest", c);
    }
}