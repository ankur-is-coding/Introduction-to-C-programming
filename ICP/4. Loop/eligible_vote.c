#include <stdio.h>

void main()
{

    int age;
    printf("put your age\n");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("you are eligible to vote");
    }
    else
    {
        printf("you are not eligible to vote, go now and study");
    }
}