#include <stdio.h>

int main() {
	const float HUNDRED = 100.0f;
	float price, discount, gst;
	float total, discountAmount, afterDiscount, gstAmount, finalAmount;
	int quantity;

	printf("Enter product price: ");
	scanf("%f", &price);
	printf("Enter quantity: ");
	scanf("%d", &quantity);
	printf("Enter discount percentage: ");
	scanf("%f", &discount);
	printf("Enter GST percentage: ");
	scanf("%f", &gst);

	total = price * (float)quantity;
	discountAmount = total * discount / HUNDRED;
	afterDiscount = total - discountAmount;
	gstAmount = afterDiscount * gst / HUNDRED;
	finalAmount = afterDiscount + gstAmount;

	printf("\nTotal amount: %.2f\n", total);
	printf("Discount amount: %.2f\n", discountAmount);
	printf("Amount after discount: %.2f\n", afterDiscount);
	printf("GST amount: %.2f\n", gstAmount);
	printf("Final payable amount: %.2f\n", finalAmount);

	return 0;
}
