#include <stdio.h>
#include <limits.h>

int main(void) { // <limits.h> 헤더파일에 정의된 매크로 활용
	printf("min of signed char: %d\n", CHAR_MIN); //signed char의 최소값
	printf("max of signed char: %d\n", CHAR_MAX); //signed char의 최대값
	printf("min of unsigned char: %d\n", 0); //부호없이 표현하므로 최소값은 0
	printf("max of unsigned char: %d\n\n", UCHAR_MAX); //unsigned char의 최대값
	
	printf("min of signed short: %d\n", SHRT_MIN); //signed short의 최소값
	printf("max of signed short: %d\n", SHRT_MAX); //signed short의 최대값
	printf("min of unsigned short: %d\n", 0); //부호없이 표현하므로 최소값은 0
	printf("max of unsigned short: %d\n\n", USHRT_MAX); //unsigned short의 최대값


	printf("min of signed int: %d\n", INT_MIN); //signed int의 최소값
	printf("max of signed int: %d\n", INT_MAX); //signed int의 최대값
	printf("min of unsigned int: %d\n", 0); //부호없이 표현하므로 최소값은 0
	printf("max of unsigned int: %d\n\n", UINT_MAX); //unsigned int의 최대값
	
	printf("min of signed long: %ld\n", LONG_MIN); //signed long의 최소값
	printf("max of signed long: %ld\n", LONG_MAX); //signed long의 최대값
	printf("min of unsigned long: %d\n", 0); //부호없이 표현하므로 최소값은 0
	printf("max of unsigned long: %ld\n\n", ULONG_MAX); //signed long의 최대값
	
	return 0;
}
	
	
	
	
	
