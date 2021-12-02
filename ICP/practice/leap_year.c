#include <stdio.h>

int main()
{

    int year;
    printf("put any year you like to check whether it is leap year or not ?");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("this is a leap year");
    }
    else if (year % 100 == 0 && year % 400 == 0)
    {
        printf("your year is a leap year");
    }
    else if (year % 100 != 0 && year % 4 == 0)
    {
        printf("your year is a leap year");
    }
    else
    {
        printf("not a leap year");
    }
}