#include <stdio.h>

void itoc(int n) {
	if (n != 0) {
		int temp = n;
		int digit = 0;
		while (temp != 0) {
			digit++;
			temp /= 10;
		}
		char arr[1000];
		arr[digit];
		for (int i = digit - 1; i > -1; i--) {
			arr[i] = (n % 10);
			n /= 10;
		}
		for (int i = 0; i < digit; i++) {
			putchar(arr[i] + '0');
		}
	}
	else {
		putchar('0');
	}
}

void calSort(char sArr[], int len, int p2Arr[]) {
	char op = NULL;
	int num = 0, idx;
	for (idx = 0; idx < len; idx++) {
		if (sArr[idx] == '+' || sArr[idx] == '-' || sArr[idx] == '*' || sArr[idx] == '/' || sArr[idx] == '%') {
			op = sArr[idx];
			break;
		}
	}
	for (int i = 0; i < idx - 1; i++) {
		num = num * 10 + (sArr[i] - '0');
	}

	switch (op) {
	case '+':
		for (idx = 0; idx < 10; idx++) {
			itoc(num + p2Arr[idx]);
			putchar('\n');
		}
		break;
	case '-':
		for (idx = 0; idx < 10; idx++) {
			itoc(num - p2Arr[idx]);
			putchar('\n');
		}
		break;
	case '*':
		for (idx = 0; idx < 10; idx++) {
			itoc(num * p2Arr[idx]);
			putchar('\n');
		}
		break;
	case '/':
		for (idx = 0; idx < 10; idx++) {
			itoc(num / p2Arr[idx]);
			putchar('\n');
		}
		break;
	case '%':
		for (idx = 0; idx < 10; idx++) {
			itoc(num % p2Arr[idx]);
			putchar('\n');
		}
		break;
	}
}

int main(void) {
	int i = 0, p = 0;
	char c, arr[1000];
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			arr[p] = '\0';
			i = p;
			break;
		}
		else {
			arr[p] = c;
			p++;
		}

		int i, count = 0;
		int pArr[10];
		for (i = 2; count < 10; i++) {
			int prime = 1;
			for (int j = 2; j <= i / 2; j++) {
				if (i % j == 0) {
					prime = 0;
					break;
				}
			}
			if (prime == 1) {
				pArr[count] = i;
				count++;
			}
		}
		calSort(arr, i, pArr);
	}
	return 0;
}