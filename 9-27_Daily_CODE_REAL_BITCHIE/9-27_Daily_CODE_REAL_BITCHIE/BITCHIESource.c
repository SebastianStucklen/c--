#include<stdio.h>

int main() {
	float num1;
	float num2;

	printf("Enter the first number: \n");
	scanf_s("%f", &num1);
	printf("Enter the second number: \n");
	scanf_s("%f", &num2);

	int num3 = num1;
	int num4 = num2;
	float num5 = num1 / num2;
	printf("Division of %f by %f:", num1, num2);
	printf(" %f \n", num5);
	if (num1 < num2) {
		printf("In order: %f %f: \n", num1, num2);
	}
	else
		printf("In order: %f %f: \n", num2, num1);

	if (num1 == 13)
		printf("Bad luck \n");
	if (num2 == 13)
		printf("Bad luck \n");

	if (num3 % 2 == 1)
		if (num4 % 2 == 1)
			printf("Odd %f %f \n", num1, num2);
	else if (num3 % 2 == 1)
		printf("Odd %f \n", num1);
	else if (num4 % 2 == 1)
		printf("Odd %f\n", num2);


}