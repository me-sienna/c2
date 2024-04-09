#include <stdio.h>

int main(void) {
	int i, j;
	for (i = 2; i < 301; i++) { //2부터 300까지의 정수 하나하나 확인할 수 있는 반복문
		int prime = 1; //1은 소수인 것을 명시
		for (j = 2; j <= i/2; j++) { // j가 2부터 i/2이하까지 i의 약수인지 하나하나 확인할 수 있는 반복문
			if (i % j == 0) { // i가 소수가 아니라는 조건
				prime = 0; 
				break; // for 탈출
			}
		}
		if (prime == 1) {
			printf("%d ", i); // 소수값 출력
		}
	}
	printf("\n");
	return 0;
}
