#include <stdio.h>

void fibonacci(long limit, long f1, long f2) {
	long a = 0, b = 1, c = 0;
	int i = 0;

	while (c <= limit) {
		c = a + b;
		a = b;
		b = c;

		if (c >= f1 && c <= f2) {
			printf("%ld ", c);
			i++;
		}
		else if (c > f2) {
			break;
		}
	}
	printf("\n%d", i);
}

int main() {
	long limit = 1000000000;
	long p, q;

	scanf("%ld %ld", &p, &q);

	fibonacci(limit, p, q);
	printf("\n");

	return 0;
}