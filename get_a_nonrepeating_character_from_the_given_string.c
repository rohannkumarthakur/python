#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "swiss";
    int count[256] = {0}, i;
    for (i = 0; str[i]; i++) count[(unsigned char)str[i]]++;
    for (i = 0; str[i]; i++) {
        if (count[(unsigned char)str[i]] == 1) { printf("First non-repeating character: %c\n", str[i]); break; }
    }
    return 0;
}
