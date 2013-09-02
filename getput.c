#include <stdio.h>

main() {
	int c, check;
	c = getchar();
	printf( "EOF = %d\n", EOF );
	printf( "putchar = " );
	putchar (c);
	printf( "\n" );
		
	while (c != EOF) {
		c = getchar();
		check = c != EOF;
		printf( "check = %d\n", check );
	}
}
