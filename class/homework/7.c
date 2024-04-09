#include <stdio.h>

int main(void) {
	int cal, i, j;
	for(i = 1; i < 21; i++) { //i가 1부터 20까지 곱셈을 수행할 수 있는 반복문
		cal = 1; //첫 연산의 시작은 1부터 곱하도록 제시
		for( j = 1; j <= i; j++) { //j가 1부터 i까지 곱셈을 수행할 수 있는 반복문
			cal *= j; //반복적인 곱셈 연산
		}
		printf("%d! = %d\n", i, cal); //연산 결과 출력
	}
	return 0;
}
