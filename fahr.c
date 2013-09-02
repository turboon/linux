#include <stdio.h>

#define LOWER -13
#define UPPER 250
#define STEP 10

main () {
	int fahr;
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
		printf ("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32) );
	}
}
