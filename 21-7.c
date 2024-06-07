#include <stdio.h>

long recurFunc(long num) {
	if (num > 1) {
		recurFunc(num / 2);
	}
	printf("%ld", num % 2);
}

int main(void) {
	long num;

	printf("Enter decimal number: ");
	scanf("%ld", &num);

	printf("Binary number is: ");
	recurFunc(num);
	printf("\n");

	return 0;
}