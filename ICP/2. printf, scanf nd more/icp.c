#include <stdio.h>

int main()
{
    // average of two numbers

    // double a, b;
    // printf("write your two numbers: \n");
    // scanf("%lf%lf", &a, &b);
    // printf("average of the no.s: %lf", (a + b)/2);

    // AVERAGE WITHOUT SCANF
    // double a = 10, b = 5, sum, avg;
    // sum = a + b;
    // avg = sum / 2;
    // printf("the average is: %lf", avg);

    // AREA OF CIRCLE:

    // double rad, pi = 3.14;
    // printf("put the value of radius: \n");
    // scanf("%lf", &rad);
    // // printf("area of circle is: %lf", rad * rad * pi);

    // printf("circumference of the circle is: %lf", 2 * pi * rad);

    // double base, height, product;
    // printf("value of base: ");
    // scanf("%lf", &base);
    // printf("value of height: ");
    // scanf("%lf", &height);
    // product = base * height;
    // printf("area of the right area triangle is %lf", 0.5 * product);

    //swapping nnumbers:

    double a, b, temp;
    printf("value of a: \n");
    scanf("%lf", &a);
    printf("value of b: \n");
    scanf("%lf", &b);

    temp = a;
    a = b;
    b = temp;
    printf("after swapping value of a is %lf\n", a);
    printf("after swapping value of b is %lf\n", b);
}
