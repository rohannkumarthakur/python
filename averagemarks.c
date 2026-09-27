#include <stdio.h>

int main() {
	char name[50];
	int rollNumber, age;
	float mark1, mark2, mark3, total, average;

	printf("Enter name: ");
	scanf("%s", name);
	printf("Enter roll number: ");
	scanf("%d", &rollNumber);
	printf("Enter age: ");
	scanf("%d", &age);
	printf("Enter marks in 3 subjects: ");
	scanf("%f %f %f", &mark1, &mark2, &mark3);

	total = mark1 + mark2 + mark3;
	average = total / 3;

	printf("\nName: %s\n", name);
	printf("Roll number: %d\n", rollNumber);
	printf("Age: %d\n", age);
	printf("Total marks: %.2f\n", total);
	printf("Average marks: %.2f\n", average);

	return 0;
}
