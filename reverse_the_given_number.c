#include <stdio.h>

int main(void) {
    int n, reverse = 0;
    scanf("%d", &n);
    while (n) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    printf("%d", reverse);
}