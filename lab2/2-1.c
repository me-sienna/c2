#include <stdio.h>

int main()
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;
	upper = 200;
	step = 20;
	
	fahr = lower;
	
	printf("fahr\t, celsius")
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%f %6f\n", fahr, celsius);
		fahr = fahr + step:
	}
}
