#include <stdio.h>

int main(void) {
	int k = 0; //윤년의 개수를 세기 위한 정수 k 정의
	
	for(int i = 2001; i < 2501; i++) { //2001년부터 2500년까지 윤년을 확인할 수 있는 반복문 설정
		if(i % 4 == 0 && i % 100 != 0) { //윤년을 확인할 수 있는 첫 번째 조건문
			k++; //윤년의 개수 증가
		}
		else if(i % 400 == 0) { //윤년을 확인할 수 있는 두 번째 조건문
			k++; //윤년의 개수 증가
		}
	}
	printf("Leap Year count: %d\n", k); //저장된 윤년의 총 개수 출력
	
	return 0;
}