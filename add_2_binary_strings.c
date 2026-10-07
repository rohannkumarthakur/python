#include <stdio.h>
#include <string.h>
int main() {
    char a[] = "1011", b[] = "1101", result[20];
    int i = strlen(a) - 1, j = strlen(b) - 1, k = 0, carry = 0, sum;
    while (i >= 0 || j >= 0 || carry) {
        sum = carry + (i >= 0 ? a[i--] - '0' : 0) + (j >= 0 ? b[j--] - '0' : 0);
        result[k++] = (sum % 2) + '0';
        carry = sum / 2;
    }
    while (k--) printf("%c", result[k]);
    return 0;
}