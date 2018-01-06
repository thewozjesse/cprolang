#include <stdio.h>

int main() {
	int c;
	int e;

	c = getchar() != EOF;
	e = EOF != EOF;
	printf("char != EOF: %d\n", c);
 	printf("EOF != EOF: %d\n", e);
}
