#include <stdio.h>

main()
{
	int day, year; /* день, год */
	char monthname[20]; /* название месяца */
	scanf ("%d %s %d", &day, monthname, &year);
	printf( "Day = %d, year = %d\n", day, year );
	return 0;
   double v, sum;
	sum = 0;
	while (scanf ("%f", &v) == 1 ){
		printf( "%f", v );
		printf ("\t%.2f\n", sum += v);
	}
	return 0;
}
