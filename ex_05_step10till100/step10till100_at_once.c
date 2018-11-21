#include <stdlib.h>
#include <stdio.h>	
#include <libgen.h>
int main (int argc, char* argv[] )
{
	int i_result=0;
	// How many arguments should the program have?
	const int i_args=1; 
	if ( argc <= i_args )
	{
		printf("please give at least 1 positive integer number (NOT 0)");
		return EXIT_FAILURE;
	}
	if (atoi(argv[1]) < 0 || atoi(argv[1]) > 100)
	{
		printf("number too high or too low");
		return EXIT_FAILURE;
	}
	else 
	{
		
		i_result=atoi(argv[1]);

		while (i_result < 100)
		{
			i_result+=10;
			printf("%d \n", i_result);
		}
		return EXIT_SUCCESS; 
	}

}
