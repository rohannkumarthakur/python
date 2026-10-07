#include <stdio.h>

int main() {
    int n = 5;

    // Outer loop is iterate over each row
    for(int i = 1; i <= n; i++) {
        
        // This inner loop prints spaces before stars
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // This inner loop prints Print stars
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        
        // Move to next row
        printf("\n"); 
    }

    return 0;
}