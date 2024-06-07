#include <stdio.h>

int main(void) {
	unsigned long long a, b;

	scanf("%llu %llu", &a, &b);

	printf("1st integer %llu\n", a);
	printf("2nd integer %llu\n", b);
	printf("%llu\n", a + b);

	return 0;
}