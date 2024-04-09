#include <stdio.h>

/* print Fashrenheit-Celsius table
	for fahr = 0, 20, ..., 300 */
main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = -20;
	upper = 100;
	step = 10;

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}
