#include <stdio.h>
#include <time.h>

void printCal(int year, int month) {
	printf("%7d�� %d\n", month, year);
	printf("�� �� ȭ �� �� �� ��\n");


}

int main(void) {
	int year, month;

	printf("Enter year: ");
	scanf("%d", &year);
	printf("Enter month: ");
	scanf("%d", &month);

	printCal(year, month);

	return 0;
}