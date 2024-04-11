#include <stdio.h>

void calSort(char sArr[], int len) {
	char op = NULL;
	int num1 = 0, num2 = 0, idx;
	for (idx = 0; idx < len; idx++) {
		if (sArr[idx] == '+' || sArr[idx] == '-' || sArr[idx] == '*' || sArr[idx] == '/' || sArr[idx] == '%') {
			op = sArr[idx];
			break;
		}
	}
	for (int i = 0; i < idx - 1; i++) {
		num1 = num1 * 10 + (sArr[i] - '0');
	}
	
	for (int i = idx + 2; i < len; i++) {
		num2 = num2 * 10 + (sArr[i] - '0');
	}


	switch (op) {
	case '+':
		printf("%d", num1 + num2);
		break;
	case '-':
		printf("%d", num1 - num2);
		break;
	case '*':
		printf("%d", num1 * num2);
		break;
	case '/':
		printf("%d", num1 / num2);
		break;
	case '%':
		printf("%d", num1 % num2);
		break;
	}
}

int main(void) {
	int i = 0, p = 0;
	char c, arr[1000];
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			arr[p] == '\0';
			i = p;
			p = 0;
		}
		else {
			arr[p] = c;
			p++;
		}
		calSort(arr, i);
	}
}