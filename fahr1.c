#include <stdio.h>

main()
{
	float fahr, cels;
	int lower, upper, step;

	lower = -70;
	upper = 300;
	step = 20;

	fahr = lower;
	printf ("---=== Temperature conversion table ===---\n");
	while (fahr <= upper) {
		cels = (5.0 / 9.0) * (fahr - 32);
		printf ("%3.0f\t%6.3f\n", fahr, cels);
		fahr = fahr + step;
	}
}
