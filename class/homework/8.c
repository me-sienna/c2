#include <stdio.h>

int binsearch(int z, int v[], int n) {//CH3 slide 7을 참고한 함수 정의
	int low = 0, high = n -1; //최소값, 최대값 설정
	while(high >= low) { //조건 제시
		int mid = (low + high) / 2; //중간값 조건 제시
		if (z < v[mid]) {
			high = mid - 1; //조건에 만족한다면 최대값 범위 감소
		}
		else if (z > v[mid]) {
			low = mid + 1; //조건에 만족한다면 최소값 범위 상승
		}
		else {
			return mid; //사용자 입력값과 중간값 일치하면, 중간값(입력값) 반환
		}
	}
	return -1; //조건에 맞지 않는다면 -1 반환
}

int main(void) {
	int v[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}; //배열 제시
	int x;
	int m;
	int n = sizeof(v) / sizeof(int); //제시된 배열 크기
	
	printf("Enter key value: "); //입력값을 받을 수 있도록 출력
	scanf("%d", &x); //입력값 x에 저장
	
	if ((m = binsearch(x, v, n)) >= 0) { //이진탐색 함수 호출
		printf("%d is v[%d] element.\n", x, m); //중간값(0이상)이 반환되면 배열의 위치 출력
	}
	else {
		printf("no %d in v[].\n", x); // -1을 반환받는다면 존재하지 않는다 출력
	}
	return 0;
}


