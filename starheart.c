#include <stdio.h>

int main() {
    int x, y;

    for (y = 10; y >= -10; y--) {
        for (x = -15; x <= 15; x++) {
            double a = (double)x / 8.0;
            double b = (double)y / 8.0;
            double heart = (a * a + b * b - 1.0);
            heart = heart * heart * heart - a * a * b * b * b;

            if (heart <= 0.0)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
    