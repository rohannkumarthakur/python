#include <stdio.h>

int main() {
    int P, A, L, NH;
    float BS = 40000, DA, TA, HRA, total;

    printf("Enter attendance (P A L NH): ");
    scanf("%d %d %d %d", &P, &A, &L, &NH);

    int totalDays = 30;
    int present = P + L + NH;

    DA = BS * 0.02;
    TA = BS * 0.01;
    HRA = BS * 0.05;
    total = BS + DA + TA + HRA;

    printf("\nTotal Present Days: %d / %d", present, totalDays);
    printf("\nTotal Salary: %.2f\n", total);

    return 0;
}







