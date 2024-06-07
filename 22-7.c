#include <stdio.h>
#include <stdlib.h>

int min(int a, int b) {
	int result = (a > b) ? b : a;
	return result;
}

int main(int argc, char* argv[]) {
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int i, gcd, lcm;
	int num = min(num1, num2);
	int pp = 1;

	printf("%d %d\n\n", num1, num2);


	for (int i = 2; i < num + 1; i++) {
		if (num1 % i == 0 && num2 % i == 0) {
			gcd = i;
			pp = 0;
		}
	}
	printf("GCD %d\n", gcd);


	for (i = num1 * num2; i >= 1; i--) {
		if (i % num1 == 0 && i % num2 == 0) {
			lcm = i;
			pp = 0;
		}
	}
	printf("LCM %d\n", lcm);

	if (pp == 1) {
		printf("두 수는 서로소입니다.\n");
	}

	return 0;
}
