#include <stdio.h>

main()
{
	float fahr, cels;
	int lower, upper, step;

	lower = -50;
	upper = 150;
	step = 10;

	cels = lower;
	printf ("---=== Temperature conversion table ===---\n");
	printf ("Celsius   Fahrenheit\n");
	while (cels <= upper) {
		//cels = (5.0 / 9.0) * (fahr - 32);
		fahr = cels * (9.0 / 5.0) + 32;
		printf ("%7.0f%13.3f\n", cels, fahr);
		cels = cels + step;
	}
}
