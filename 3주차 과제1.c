#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void printFunc(int start, int end) {
	int i;

	if (start < end) {
		for (i = start; i <= end; i += 5) {
			printf("%d %d %d %d %d\n", i, i + 1, i + 2, i + 3, i + 4);
		}
	}
	else {
		for (i = start; i >= end; i -= 5) {
			printf("%d %d %d %d %d\n", i, i - 1, i - 2, i - 3, i - 4);
		}
	}
}

int main(int argc, char* argv[]) {
	int start, end;

	if (strcmp(argv[1], "-r") != 0) {
		start = (atoi)(argv[1]);
		end = (atoi)(argv[2]);
	}
	else {
		start = (atoi)(argv[3]);
		end = (atoi)(argv[2]);
	}

	printFunc(start, end);

	return 0;
}