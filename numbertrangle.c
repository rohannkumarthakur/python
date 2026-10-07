#include <stdio.h>

int main() {
    int i, j, n = 5;

    // Loop for each row in reverse
    for(i = n; i >= 1; i--) {
        
        // Print numbers in a row
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        
        // Move to next row
        printf("\n"); 
    }

    return 0;
}