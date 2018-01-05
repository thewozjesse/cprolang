#include <stdio.h>

int main() {
	float fahr, celsius;
	float lower, upper, step;
	char fahrTitle[] = "Fahrenheit";
	char celsiusTitle[] = "Celsius";

	lower = 0;	/* lower limit of temperature scale */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	fahr = lower;

	// print titles for the chart
	printf("%s\t%s\n", fahrTitle, celsiusTitle);

	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f\t\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
