#include <stdio.h>

int main(void) {
	long b;
	float d;
	d = 1.2345F;
	b = * ( long * ) &d;
	printf( "%f", b );
}
