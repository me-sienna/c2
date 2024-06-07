#include <stdio.h>
#include <time.h>

void printCal(int year, int month) {
	printf("%7d월 %d\n", month, year);
	printf("일 월 화 수 목 금 토\n");


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