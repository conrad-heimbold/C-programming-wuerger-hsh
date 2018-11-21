#include <stdlib.h>
#include <stdio.h>	

int main (int argc, char* argv[] )
{
	int i_number = 0;
	// ERROR HANDLING
	if ( argc == 0 || argc == 1 || argc > 2 )
	{
		printf("please give ONE positive integer number (NOT 2, NOT 0)");
		return EXIT_FAILURE;
	}
	else 
	{
		int i_number = atoi(argv[1]);
	}
	int i_is_prime_number = 0;
	int i_counter = 0;

	printf("PRIME NUMBER TESTER\n\n");
	printf("program name is: %s", argv[0]);
	printf("\n\n");
	printf("first argument is: %d", i_number1);
	printf("\n\n");
}
