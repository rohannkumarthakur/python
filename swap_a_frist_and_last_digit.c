#include <stdio.h>

int main(void)
{
    int n, first, last, place = 1, temp;

    scanf("%d", &n);
    temp = n;

    while (temp >= 10) {
        place *= 10;
        temp /= 10;
    }

    first = n / place;
    last = n % 10;
    n = n - first * place - last + last * place + first;

    printf("%d", n);
    return 0;
}