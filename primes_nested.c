#include <stdio.h>
int main() {
    int N, i, j, isPrime;
    printf("Enter the upper limit: ");
    scanf("%d", &N);
    printf("Prime numbers between 1 and %d are: ", N);
    for (i = 2; i <= N; i++) {
        isPrime = 1;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
