#include <stdio.h>

int main(void) {
	unsigned int num; //입력받을 양의 정수값 정의
	unsigned int arr[16]; //이진수를 저장할 배열 정의
	
	printf("Enter number: "); //양의 정수를 입력 받을 수 있게 출력
	scanf("%d", &num); //입력받은 정수 num에 저장
	
	for(int i = 15; i > -1; i--) { //입력받은 정수를 이진수로 변환하여 배열에 저장하는 반복문
		arr[i] = num % 2;
		num /= 2;
	}
	
	for(int i = 0; i < 16; i++) { //배열에 저장한 이진수를 출력하는 반복문
		printf("%d", arr[i]);
	}
	printf("\n");
	
	return 0;
} 
