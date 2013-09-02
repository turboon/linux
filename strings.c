#include <stdio.h>
#include <string.h>

int main( void ) {
	char[255] s1, s2, s3, s4;
	printf( "Hello!!\n" );
	s1 = "test string";
	s2 = strcpy( s2, s1 );
	printf( s2 );	
}
