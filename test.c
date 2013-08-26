#include <stdio.h>
float func( float a )
{
	a = (double) a;
	long b;
        double c, d;
        const double e = 1.5F;
        c = a * 0.5F;
        d = a;
	printf( "d = %10.10f\n", d );
        b = * ( long * ) &d;
	printf( "d = %10.10f\n", d );
	printf( "b = %10.10f\n", b );
	printf( "b >> 1 = %10.10f\n", 5 >> 1 );
	b = 0x5f3759df - ( b >> 1 );
	printf( "d = %10.10f\n", d );
	printf( "b = %10.10f\n", b );
        d = * ( float * ) &b;
        d = d * ( e - ( c * d * d ) );
        return d;
}

int main(void) {
	float a;
	float i;
	i = 1.2345;
	//for ( i = 0; i < 4; i += 1 ){
	//a = func( i );
	printf( "%f", 1.2345F >> 2 );
	//printf ("%f : %f\n", i, a);
	//}
	return 0;
}

