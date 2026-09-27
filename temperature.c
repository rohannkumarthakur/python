#include <stdio.h>

int main() {
	float celsius, fahrenheit;

	printf("Enter Celsius: ");
	scanf("%f", &celsius);
	printf("Enter Fahrenheit: ");
	scanf("%f", &fahrenheit);

	printf("Celsius to Fahrenheit: %.2f\n", celsius * ((float)9 / 5) + 32);
	printf("Fahrenheit to Celsius: %.2f\n", (fahrenheit - 32) * ((float)5 / 9));

	return 0;
}
