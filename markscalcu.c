#include <stdio.h>

int main() {
	int marks, totalMarks;
	float percentage;

	printf("Enter marks obtained: ");
	scanf("%d", &marks);
	printf("Enter total marks: ");
	scanf("%d", &totalMarks);

	percentage = ((float)marks / totalMarks) * 100;

	printf("Percentage: %.2f%%\n", percentage);

	return 0;
}
