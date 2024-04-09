#include <stdio.h>

void printarr(int v[], int n) { //정수 배열을 출력하는 함수 정의
	printf("integer array: "); //정수 배열을 출력
	for (int k = 0; k < n; k++) { //반복문을 활용하여 저장된 배열 순서대로 제시한 후 출력
		printf("%d ", v[k]);
	}
	printf("\n");
}

void shellsort(int v[], int n) { //배열을 정리해주는 함수 정의
	int gap, i, j, temp;
	
	for (gap = n / 2; gap > 0; gap /= 2) { //정렬할 배열을 배열의 크기를 절반으로 나눈 값으로 시작
		for (i = gap; i < n; i++) { //각 부분 배열에 대해 삽입 정렬을 수행. 이때, 간격만큼 떨어진 요소들을 서로 비교하며 정렬,
			for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) { //간격을 점점 줄여가며 간격이 1이 될 때까지 반복.
				temp = v[j];
				v[j] = v[j + gap];
				v[j + gap] = temp;
			}
		}
	}
}

int main(void) { 
	int a[] = {10, 90, 80, 70, 40, 30, 20, 60, 50}; //초기 배열 제시
	int n = sizeof(a) / sizeof(int); //주어진 배열의 크기
	
	printarr(a, n); //초기배열 호출 및 출력
	shellsort(a, n); //배열정리 함수 호출
	printarr(a, n); //정리된 배열 호출 및 출력
	
	return 0;
}
	
