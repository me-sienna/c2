#include <stdio.h>

int main(void) {
	int a[] = { 1, 2, 3, 4, 5 };
	int* p = a;
	int i;
	int n = sizeof(a) / sizeof(int);

	printf("printf with a[i] and for()\n");
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	printf("\n\nprintf with p and while()\n");
	while (p - a < 5) {
		printf("%d ", *(p++));
	}

	return 0;
}