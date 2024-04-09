#include <stdio.h>

int main(void) {
	int i, j;
	int prime;
	
	printf("2 ");
	
	for(i = 3; i <= 200; i += 2) {
		prime = 1;
		
		for(j = 2; j <= i / 2; j++) {
			if(i % j == 0) {
				prime = 0;
				break;
			}
		}
		
		if(prime == 1) {
			printf("%d ", i);
		}
	}
	
	printf("\n");
	
	return 0;
}
