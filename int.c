#include <stdio.h>

int main(void) {
	int a, b;
	a = 0x80000000;
   a = 0x10000000;
	b = -a;
	b = 0x80000000;
	printf( "%d", a ); 
	printf( "\n" );
	printf( "%d", b ); 
	printf( "\n" );
	if ( a >= 0 ) {
		return(0);
   }

	if ( b >= 0 ) {
		return(0);
	}

   printf( "Heylo!!\n", a );

   return(0);
}

