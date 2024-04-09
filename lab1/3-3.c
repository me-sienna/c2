#include <stdio.h>

void shellsort(int v[], int n) {
	// KRC p. 62
}

int main (void) {
	int s[] = {12, 73, 4, 51, 22, 71, 2, 68, 100, 35};
	int i;
	int m = sizeof(s)/sizeof(int);
	
	for(i = 0; i < m; i++)
		printf("%4d", s[i]);
	putchar('\n');
	
	shellsort(s, m);
	for(i = 0; i < m; i++)
		printf("%4d", s[i]);
	putchar('\n');
	
	return 0;
}
	
