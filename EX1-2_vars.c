#include <stdio.h>

int main() {
	int fahr, celsius;
	int lower, upper, step;
	char fahrTitle[] = "Fahrenheit";
	char celsiusTitle[] = "Celsius";

	lower = 0;	/* lower limit of temperature scale */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	fahr = lower;

	// print titles for the chart
	printf("%s\t%s\n", fahrTitle, celsiusTitle);

	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}
