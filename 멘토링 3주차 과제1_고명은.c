#include <stdio.h>

int main(void) {
	int i,a,b,c;
	int arr[30][6];

	for (a = 0; a < 30; a++) {
		for (b = 0; b < 6; b++) {
			for (c = 33; c < 127; c++) {
				scanf_s("%d", &arr[a][b]);
			}
		}
	}

	for (a = 0; a < 30; a++) {
		for (b = 0; b < 6; b++) {
			printf("%d %x %c ", arr[a][b], arr[a][b], arr[a][b]);
		}
	}
	return 0;
}