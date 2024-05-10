#include <stdio.h>

int main(void) {
	int a[][3] = { {1, 2, 3},{4, 5, 6},{7, 8, 9} };
	int* pa[] = { a[0], a[1], a[2] };
	int* p = a[0];

	int i;
	for (i = 0; i < 3; i++) {
		printf("%d %d %d\n", a[i][2 - i], *a[i], *(*(a + i) + i));
	}
	/* 
 	*a[i] a의 i번째 요소
  	*(*(a+i)+i) a의 i번째 행에 있는 i번째 열의 요소
	a[0][2]=3, a[0][0]=1, a[0][0]=1
	a[1][1]=5, a[1][0]=4, a[1][1]=5
	a[2][0]=7, a[2][0]=7, a[2][2]=9
	*/
	putchar('\n');

	for (i = 0; i < 3; i++) {
		printf("%d %d\n", *pa[i], p[i]);
	}
	/*
	pa[0]={1,4,7}, pa[1]={2,5,8}, pa[2]={3,6,9}
	p[0]= a[0][0], p[1]= a[0][1], p[2]= a[0][2]
	*/
	putchar('\n');

	return 0;
}
