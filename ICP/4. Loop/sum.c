#include <stdio.h>

int main()
{

    int i, n, sum = 0, total;

    printf("put the value for n\n");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        sum += i;
        //printf("%d is the sum of first %d number", sum, n);
    }
    printf("%d is the total sum", sum);
}