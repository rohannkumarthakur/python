#include <stdio.h>

int main(void)
{
    int number, count = 0;

    scanf("%d", &number);

    if (number == 0)
        count = 1;
    else
        while (number) {
            count++;
            number /= 10;
        }

    printf("%d", count);
}