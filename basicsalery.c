#include <stdio.h>

int main() {
	float basicSalary, hra, da, grossSalary;

	printf("Enter basic salary: ");
	scanf("%f", &basicSalary);
	printf("Enter HRA: ");
	scanf("%f", &hra);
	printf("Enter DA: ");
	scanf("%f", &da);

	grossSalary = basicSalary + hra + da;

	printf("Gross salary: %.2f\n", grossSalary);

	return 0;
}
